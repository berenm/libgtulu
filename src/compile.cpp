/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */
#include "gtulu_opengl_pch.hpp"

#include <string>
#include <vector>
#include <map>

#include "gtulu/internal/uniform.hpp"
#include "gtulu/internal/attribute.hpp"
#include "gtulu/internal/objects/program.hpp"
#include "gtulu/internal/formats/program/dynamic.hpp"
#include "gtulu/internal/objects/shader.hpp"
#include "gtulu/internal/formats/shader/dynamic.hpp"

#include "gtulu/utils/file.hpp"

void init_gl(int argc, char** argv);
void close_gl();

void do_frame() {
}

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <iomanip>
/* Ensure we are using opengl's core profile only */

#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/bind.hpp>
#include <boost/foreach.hpp>
#include <boost/regex.hpp>
#include <boost/lexical_cast.hpp>

namespace po = ::boost::program_options;
namespace bfs = ::boost::filesystem;

namespace gu = ::gtulu::utils;
namespace gio = ::gtulu::internal::objects;

namespace fc = ::gtulu::internal::formats::common;

namespace fu = ::gtulu::internal::formats::uniform;
namespace fuf = ::gtulu::internal::formats::uniform::format;
namespace fub = ::gtulu::internal::formats::uniform::base;

namespace fa = ::gtulu::internal::formats::attribute;
namespace faf = ::gtulu::internal::formats::attribute::format;
namespace fab = ::gtulu::internal::formats::attribute::base;

namespace fs = ::gtulu::internal::formats::shader;
namespace fp = ::gtulu::internal::formats::program;
namespace fst = ::gtulu::internal::formats::shader::type;

namespace cst = ::gtulu::internal::constant;

struct program_compiler {
    gu::file_template header_template;
    gu::file_template source_template;

    ::std::string name;

    program_compiler(::std::string name_in, ::boost::filesystem::path template_path = "include/gtulu/templates/") :
        header_template("static_program_format.hpp", template_path), source_template("static_program_format.cpp",
                                                                                     template_path), name(name_in) {
    }

    void add_shader(::std::string name, ::std::string type, ::std::string source) {
      gu::file_template define_shader = header_template.get("define_shader");
      gu::file_template declare_shader = header_template.get("declare_shader");
      gu::file_template shader_source = source_template.get("declare_shader_source");

      ::std::map< ::std::string, ::std::string > arguments;
      arguments["shader"] = name;
      arguments["type"] = type;
      arguments["source"] = source;

      define_shader.populate(arguments);
      declare_shader.populate(arguments);
      shader_source.populate(arguments);

      arguments.clear();

      ::std::vector< gu::file_template > subtemplates;
      subtemplates.push_back(define_shader);
      subtemplates.push_back(declare_shader);
      header_template.populate(arguments, subtemplates);

      subtemplates.clear();
      subtemplates.push_back(shader_source);
      source_template.populate(arguments, subtemplates);
    }

    void add_uniform(::std::string suffix,
                     ::std::string name,
                     ::std::string type,
                     ::std::string location,
                     ::std::string size = "",
                     ::std::string count = "") {
      ::std::string template_name = "uniform";
      template_name.append(suffix);

      gu::file_template uniform = header_template.get(template_name);

      ::std::map< ::std::string, ::std::string > arguments;
      arguments["name"] = name;
      arguments["type"] = type;
      arguments["location"] = location;
      arguments["size"] = size;
      arguments["count"] = count;

      uniform.populate(arguments);

      arguments.clear();
      ::std::vector< gu::file_template > subtemplates;
      subtemplates.push_back(uniform);
      header_template.populate(arguments, subtemplates);
    }

    void add_attribute(::std::string suffix,
                       ::std::string name,
                       ::std::string type,
                       ::std::string location,
                       ::std::string size = "",
                       ::std::string count = "") {
      ::std::string template_name = "attribute";
      template_name.append(suffix);

      gu::file_template attribute = header_template.get(template_name);

      ::std::map< ::std::string, ::std::string > arguments;
      arguments["name"] = name;
      arguments["type"] = type;
      arguments["location"] = location;
      arguments["size"] = size;
      arguments["count"] = count;

      attribute.populate(arguments);

      arguments.clear();
      ::std::vector< gu::file_template > subtemplates;
      subtemplates.push_back(attribute);
      header_template.populate(arguments, subtemplates);
    }

    void add_output(::std::string suffix,
                    ::std::string name,
                    ::std::string type,
                    ::std::string location,
                    ::std::string size = "") {
      ::std::string template_name = "output";
      template_name.append(suffix);
      gu::file_template output = header_template.get(template_name);

      template_name = "default_output";
      template_name.append(suffix);
      gu::file_template default_output = header_template.get(template_name);

      ::std::map< ::std::string, ::std::string > arguments;
      arguments["name"] = name;
      arguments["type"] = type;
      arguments["location"] = location;
      arguments["size"] = size;

      output.populate(arguments);
      default_output.populate(arguments);

      arguments.clear();
      ::std::vector< gu::file_template > subtemplates;
      subtemplates.push_back(output);
      subtemplates.push_back(default_output);
      header_template.populate(arguments, subtemplates);
    }

    void save(::boost::filesystem::path const& destination) {
      ::std::map< ::std::string, ::std::string > arguments;
      arguments["program"] = name;

      header_template.populate(arguments);
      source_template.populate(arguments);

      ::std::string header_file_name = name;
      header_file_name.append("_program_format.hpp");
      ::boost::filesystem::ofstream header(destination / header_file_name);
      header << header_template.get_content();

      ::std::string source_file_name = name;
      source_file_name.append("_program_format.cpp");
      ::boost::filesystem::ofstream source(destination / source_file_name);
      source << source_template.get_content();
    }

    void debug() {
      header_template.debug();
      source_template.debug();
    }
};

const ::std::string get_shader_name(::bfs::path const& shader_file) {
  ::std::string filename = shader_file.filename().string();

  filename = filename.substr(0, filename.length() - shader_file.extension().string().length());
  ::std::replace_if(filename.begin(), filename.end(), ::boost::is_punct(), '_');
  ::std::replace_if(filename.begin(), filename.end(), ::boost::is_space(), '_');
  ::std::remove_if(filename.begin(), filename.end(), ::boost::is_cntrl());

  return filename;
}

const cst::gl_constant_base get_shader_type(::bfs::path const& shader_file) {
  ::std::string extension = shader_file.extension().string();

  if (extension.compare(".fs") == 0 || extension.compare(".frag") == 0) {
    return fst::gl_fragment_shader();
  } else if (extension.compare(".vs") == 0 || extension.compare(".vert") == 0) {
    return fst::gl_vertex_shader();
  } else if (extension.compare(".gs") == 0 || extension.compare(".geom") == 0) {
    return fst::gl_geometry_shader();
  } else {
    __gtulu_error << "Unknown shader extension " << extension
          << ", please use one of .fs/.frag, .gs/.geom or .vs/.vert.";
  }

  return cst::invalid_constant();
}

struct uniform_type_info {
    ::std::uint32_t count;
    bool is_sampler;
    ::std::string name;
};

struct attribute_type_info {
    ::std::uint32_t count;
    ::std::string name;
};

template< typename Base >
struct is_sampler: ::boost::false_type {
};

template< >
struct is_sampler< fub::sampler > : ::boost::true_type {
};

#define COMPLETE_UNIFORM_INFO(type_m) \
	case fuf::gl_ ##type_m::value:\
  	info.count = fc::to_literal< fu::gl_##type_m::info::count >::type::value; \
  	info.name = #type_m; \
  	info.is_sampler = is_sampler< fu::gl_##type_m::info::base >::value; \
  	break; \

const uniform_type_info get_uniform_info(cst::gl_constant_base const& type) {
  uniform_type_info info;

  switch (::std::uint32_t(type)) {
    COMPLETE_UNIFORM_INFO(float)
    COMPLETE_UNIFORM_INFO(float_vec2)
    COMPLETE_UNIFORM_INFO(float_vec3)
    COMPLETE_UNIFORM_INFO(float_vec4)
    COMPLETE_UNIFORM_INFO(int)
    COMPLETE_UNIFORM_INFO(int_vec2)
    COMPLETE_UNIFORM_INFO(int_vec3)
    COMPLETE_UNIFORM_INFO(int_vec4)
    COMPLETE_UNIFORM_INFO(unsigned_int)
    COMPLETE_UNIFORM_INFO(unsigned_int_vec2)
    COMPLETE_UNIFORM_INFO(unsigned_int_vec3)
    COMPLETE_UNIFORM_INFO(unsigned_int_vec4)
    COMPLETE_UNIFORM_INFO(bool)
    COMPLETE_UNIFORM_INFO(bool_vec2)
    COMPLETE_UNIFORM_INFO(bool_vec3)
    COMPLETE_UNIFORM_INFO(bool_vec4)
    COMPLETE_UNIFORM_INFO(float_mat2)
    COMPLETE_UNIFORM_INFO(float_mat3)
    COMPLETE_UNIFORM_INFO(float_mat4)
    COMPLETE_UNIFORM_INFO(float_mat2x3)
    COMPLETE_UNIFORM_INFO(float_mat2x4)
    COMPLETE_UNIFORM_INFO(float_mat3x2)
    COMPLETE_UNIFORM_INFO(float_mat3x4)
    COMPLETE_UNIFORM_INFO(float_mat4x2)
    COMPLETE_UNIFORM_INFO(float_mat4x3)
    COMPLETE_UNIFORM_INFO(sampler_1d)
    COMPLETE_UNIFORM_INFO(sampler_2d)
    COMPLETE_UNIFORM_INFO(sampler_3d)
    COMPLETE_UNIFORM_INFO(sampler_cube)
    COMPLETE_UNIFORM_INFO(sampler_1d_shadow)
    COMPLETE_UNIFORM_INFO(sampler_2d_shadow)
    COMPLETE_UNIFORM_INFO(sampler_1d_array)
    COMPLETE_UNIFORM_INFO(sampler_2d_array)
    COMPLETE_UNIFORM_INFO(sampler_1d_array_shadow)
    COMPLETE_UNIFORM_INFO(sampler_2d_array_shadow)
    COMPLETE_UNIFORM_INFO(sampler_2d_multisample)
    COMPLETE_UNIFORM_INFO(sampler_2d_multisample_array)
    COMPLETE_UNIFORM_INFO(sampler_cube_shadow)
    COMPLETE_UNIFORM_INFO(sampler_buffer)
    COMPLETE_UNIFORM_INFO(sampler_2d_rect)
    COMPLETE_UNIFORM_INFO(sampler_2d_rect_shadow)
    COMPLETE_UNIFORM_INFO(int_sampler_1d)
    COMPLETE_UNIFORM_INFO(int_sampler_2d)
    COMPLETE_UNIFORM_INFO(int_sampler_3d)
    COMPLETE_UNIFORM_INFO(int_sampler_cube)
    COMPLETE_UNIFORM_INFO(int_sampler_1d_array)
    COMPLETE_UNIFORM_INFO(int_sampler_2d_array)
    COMPLETE_UNIFORM_INFO(int_sampler_2d_multisample)
    COMPLETE_UNIFORM_INFO(int_sampler_2d_multisample_array)
    COMPLETE_UNIFORM_INFO(int_sampler_buffer)
    COMPLETE_UNIFORM_INFO(int_sampler_2d_rect)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_1d)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_2d)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_3d)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_cube)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_1d_array)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_2d_array)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_2d_multisample)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_2d_multisample_array)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_buffer)
    COMPLETE_UNIFORM_INFO(unsigned_int_sampler_2d_rect)
  }

  return info;
}
#undef COMPLETE_UNIFORM_INFO

#define COMPLETE_ATTRIBUTE_INFO(type_m) \
        case faf::gl_ ##type_m::value:\
        info.count = fc::to_literal< fa::gl_##type_m::info::count >::type::value; \
        info.name = #type_m; \
        break; \

const attribute_type_info get_attribute_info(cst::gl_constant_base const& type) {
  attribute_type_info info;

  switch (::std::uint32_t(type)) {
    COMPLETE_ATTRIBUTE_INFO(float)
    COMPLETE_ATTRIBUTE_INFO(float_vec2)
    COMPLETE_ATTRIBUTE_INFO(float_vec3)
    COMPLETE_ATTRIBUTE_INFO(float_vec4)
    COMPLETE_ATTRIBUTE_INFO(int)
    COMPLETE_ATTRIBUTE_INFO(int_vec2)
    COMPLETE_ATTRIBUTE_INFO(int_vec3)
    COMPLETE_ATTRIBUTE_INFO(int_vec4)
    COMPLETE_ATTRIBUTE_INFO(unsigned_int)
    COMPLETE_ATTRIBUTE_INFO(unsigned_int_vec2)
    COMPLETE_ATTRIBUTE_INFO(unsigned_int_vec3)
    COMPLETE_ATTRIBUTE_INFO(unsigned_int_vec4)
    COMPLETE_ATTRIBUTE_INFO(float_mat2)
    COMPLETE_ATTRIBUTE_INFO(float_mat3)
    COMPLETE_ATTRIBUTE_INFO(float_mat4)
    COMPLETE_ATTRIBUTE_INFO(float_mat2x3)
    COMPLETE_ATTRIBUTE_INFO(float_mat2x4)
    COMPLETE_ATTRIBUTE_INFO(float_mat3x2)
    COMPLETE_ATTRIBUTE_INFO(float_mat3x4)
    COMPLETE_ATTRIBUTE_INFO(float_mat4x2)
    COMPLETE_ATTRIBUTE_INFO(float_mat4x3)
  }

  return info;
}
#undef COMPLETE_ATTRIBUTE_INFO

void add_shader(gio::dynamic_program_t& program, ::bfs::path shader_file) {
  gio::dynamic_shader_t shader;

  shader.load_shader(shader_file);
  shader.compile();
  if (shader.has_log()) {
    shader.print_log();
  }

  program.attach(shader);

  //  ::std::vector< ::program::output_info > shader_infos = shader.get_output_infos();
  //
  //  infos.insert(infos.end(), shader_infos.begin(), shader_infos.end());
}

int main(int argc, char *argv[]) {
  ::std::ostringstream cmdline;

  for (::std::int32_t i = 0; i < argc; ++i) {
    cmdline << argv[i] << " ";
  }
  __gtulu_info << cmdline.str();

  init_gl(argc, argv);

  ::std::string program;
  ::std::string destination;
  ::std::string templates;
  ::std::vector< ::std::string > inputs;

  po::options_description desc("Allowed options");
  po::options_description_easy_init add_options = desc.add_options();
  add_options("help,h", "produce help message");
  add_options("program-name,p", po::value< ::std::string >(&program)->default_value("default"), "program name");
  add_options("destination,d",
              po::value< ::std::string >(&destination)->default_value("generated/"),
              "destination folder");
  add_options("templates,t",
              po::value< ::std::string >(&templates)->default_value("include/gtulu/templates/"),
              "templates folder");
  add_options("input-file", po::value< ::std::vector< ::std::string > >(&inputs), "input files");

  po::positional_options_description p;
  p.add("input-file", -1);

  po::variables_map vm;
  po::store(po::command_line_parser(argc, argv).options(desc).positional(p).run(), vm);
  po::notify(vm);

  if (!vm.count("program-name") || !vm.count("input-file") || vm.count("help")) {
    ::std::cout << desc << "\n";
    return 1;
  }

  gio::dynamic_program_t prog;
  for (::std::vector< ::std::string >::iterator it = inputs.begin(); it != inputs.end(); ++it) {
    ::std::string& file = *it;

    add_shader(prog, file);
  }

  prog.link();

  if (prog.has_log()) {
    prog.print_log();
  }

  prog.print();

  program_compiler compiler(program, templates);

  //  int attribute_count = inspector.get_attribute_count();
  //  __log
  //<<  "attribute count " << attribute_count;
  //  for (int i = 0; i < attribute_count; ++i) {
  //    ::program::attribute_info info = inspector.get_attribute_info(i);
  //    __logL(info) << info.index << " " << info.location << " " << info.name
  //    << " " << info.size << " " << info.type;
  //  }
  //  int uniform_block_count = prog.get_uniform_block_count();
  //  __log << "uniform block count " << uniform_block_count;

  for (::std::vector< ::std::string >::iterator it = inputs.begin(); it != inputs.end(); ++it) {
    ::std::string& file = *it;

    ::std::string shader_name = get_shader_name(file);
    ::std::stringstream shader_type;
    shader_type << get_shader_type(file);

    ::std::stringstream shader_source;
    ::std::string content = gu::file::get_contents(file);
    ::std::vector< ::std::string > lines;
    ::boost::split(lines, content, ::boost::is_any_of("\r\n"));
    for (::std::vector< ::std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
      if (it->length() > 0) {
        shader_source << "\"" << *it << "\\n\"" << ::std::endl;
      }
    }

    compiler.add_shader(shader_name, shader_type.str(), shader_source.str());
  }

  fp::uniform_vector_t const& uniforms = prog.get_uniforms();
  fp::uniform_vector_t::const_iterator uniform_it = uniforms.begin();
  for (; uniform_it != uniforms.end(); ++uniform_it) {
    fp::uniform_info const& info = *uniform_it;
    uniform_type_info type_info = get_uniform_info(info.type);

    ::std::string prefix;
    if (info.size == 1) {
      if (type_info.is_sampler) {
        prefix = "_sampler";
      }
    } else {
      prefix = "_array";
    }

    compiler.add_uniform(prefix,
                         info.name,
                         type_info.name,
                         ::boost::lexical_cast< ::std::string >(info.location),
                         ::boost::lexical_cast< ::std::string >(type_info.count),
                         ::boost::lexical_cast< ::std::string >(info.size));
  }

  fp::attribute_vector_t const& attributes = prog.get_attributes();
  fp::attribute_vector_t::const_iterator attribute_it = attributes.begin();
  for (; attribute_it != attributes.end(); ++attribute_it) {
    fp::attribute_info const& info = *attribute_it;
    attribute_type_info type_info = get_attribute_info(info.type);

    ::std::string name = info.name;
    ::boost::replace_all(name, "[", "_");
    ::boost::replace_all(name, "]", "");

    ::std::string prefix;
    if (info.size > 1) {
      prefix = "_array";
    }

    compiler.add_attribute(prefix,
                           name,
                           type_info.name,
                           ::boost::lexical_cast< ::std::string >(info.location),
                           ::boost::lexical_cast< ::std::string >(type_info.count),
                           ::boost::lexical_cast< ::std::string >(info.size));
  }

  fp::output_vector_t const& outputs = prog.get_outputs();
  fp::output_vector_t::const_iterator output_it = outputs.begin();
  for (; output_it != outputs.end(); ++output_it) {
    fp::output_info const& info = *output_it;

    if (info.location >= 0) {
      ::std::string name = info.name;

      ::boost::replace_all(name, "[", "_");
      ::boost::replace_all(name, "]", "");

      ::std::string prefix;
      if (info.size > 1) {
        prefix = "_array";
      }

      ::std::stringstream type;
      type << info.type;

      compiler.add_output(prefix,
                          name,
                          type.str(),
                          ::boost::lexical_cast< ::std::string >(info.location),
                          ::boost::lexical_cast< ::std::string >(info.size));
    } else {
      __gtulu_warn << "shader: " << "Output data '" << info.type << "' " << info.name
            << " not bound. Maybe only used internally.";
    }
  }

  compiler.save(destination);

  close_gl();

  return 0;
}
