/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/utils/file.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <boost/algorithm/string.hpp>
#include <boost/filesystem/fstream.hpp>

namespace gtulu {
  namespace utils {

    ::std::string file::get_contents(::boost::filesystem::path const& path) {
      if (::boost::filesystem::exists(path) && ::boost::filesystem::is_regular_file(path)) {
        ::boost::filesystem::ifstream stream(path);

        stream.seekg(0, std::ios::end);
        ::std::uint32_t size = stream.tellg();

        ::boost::scoped_array< char > buffer(new char[size]);

        stream.seekg(0, std::ios::beg);
        stream.read(buffer.get(), size);
        stream.close();

        return ::std::string(buffer.get(), size);
      } else {
        __fatal << "Unable to read file " << path;
      }

      return "";
    }

    void file_template::parse(::boost::sregex_iterator& iterator) {
      const ::boost::sregex_iterator end;

      name = iterator->str(1);
      raw_data = "";

      end_name = "/";
      end_name.append(name);

      ::std::string args = iterator->str(2);
      ::boost::split(arguments, args, ::boost::is_any_of(","));

      while (++iterator != end) {
        ::std::string template_name = iterator->str(1);

        if (end_name.compare(template_name) == 0) {
          raw_data.append(iterator->prefix().first, iterator->prefix().second);
          break;
        } else {
          raw_data.append(iterator->prefix().first, iterator->prefix().second);

          if (name.compare(template_name) != 0) {
            raw_data.append("// #template#<");
            raw_data.append(template_name);
            raw_data.append("/>");

            sub_templates.insert(::std::make_pair< ::std::string, file_template >(::std::string(template_name),
                                                                                  file_template(iterator)));
          }
        }
      }

      content = raw_data;
    }

    file_template::file_template() {
      content = "";
      raw_data = "";
      name = "";
      end_name = "";
    }

    file_template::file_template(::boost::sregex_iterator& iterator) {
      parse(iterator);
    }

    file_template::file_template(file_template const& copy) {
      arguments = copy.arguments;
      content = copy.content;
      end_name = copy.end_name;
      name = copy.name;
      raw_data = copy.raw_data;
      sub_templates = copy.sub_templates;
    }

    file_template::file_template(::std::string const& template_file, ::boost::filesystem::path const& template_path) {
      ::boost::filesystem::path file_path = template_path;
      file_path /= template_file;

      if (::boost::filesystem::exists(file_path) && ::boost::filesystem::is_regular_file(file_path)) {
        ::std::string content = file::get_contents(file_path);

        ::boost::regex templates("// #template#<(.*)>(.*)$");
        ::boost::sregex_iterator iterator(content.begin(), content.end(), templates, ::boost::match_not_dot_newline);

        parse(iterator);
      } else {
        __fatalM(compiler) << "Unable to find template file " << template_file;
      }
    }

    void file_template::reset() {
      content = raw_data;
    }

    file_template file_template::get(::std::string const& sub_template) {
      return sub_templates[sub_template];
    }

    ::std::string file_template::get_content() {
      return content;
    }

    void file_template::populate(::std::map< ::std::string, ::std::string >& arguments_in,
    ::std::vector< file_template > sub_templates) {
      typedef ::std::map< ::std::string, ::std::string >::iterator args_it_t;
      typedef ::std::vector< file_template >::iterator subs_in_it_t;

      ::std::string replace;
      ::std::string replacement;
      for (args_it_t arg = arguments_in.begin(); arg != arguments_in.end(); ++arg) {
        replace = "_";
        replace.append(arg->first);
        replace.append("_tpl");
        replacement = arg->second;
        ::boost::replace_all(content, replace, replacement);

        replace = "_";
        replace.append(arg->first);
        replace.append("_upper_tpl");
        replacement = arg->second;
        ::boost::to_upper(replacement);
        ::boost::replace_all(content, replace, replacement);

        replace = "_";
        replace.append(arg->first);
        replace.append("_lower_tpl");
        replacement = arg->second;
        ::boost::to_lower(replacement);
        ::boost::replace_all(content, replace, replacement);
      }

      for (subs_in_it_t sub = sub_templates.begin(); sub != sub_templates.end(); ++sub) {
        sub->populate(arguments_in);

        ::std::string replace = "// #template#<";
        replace.append(sub->name);
        replace.append("/>");

        ::std::string replacement = replace;
        replacement.append("\n");
        replacement.append(sub->get_content());

        ::boost::replace_all(content, replace, replacement);
      }
    }

    void file_template::debug(::std::string prefix) {
      ::std::cout << prefix << "template " << name << ::std::endl;

      ::std::cout << prefix << "  arguments: ";
      typedef ::std::vector< ::std::string >::iterator args_it_t;
      for (args_it_t arg = arguments.begin(); arg != arguments.end(); ++arg) {
        ::std::cout << *arg;
      }
      ::std::cout << ::std::endl;

      ::std::cout << prefix << "  contents: " << ::std::endl;
      ::std::cout << prefix << "  ------------------------------------------------------------------------------ "
          << ::std::endl;
      ::std::cout << raw_data << ::std::endl;
      ::std::cout << prefix << "  ------------------------------------------------------------------------------ "
          << ::std::endl;

      if (!sub_templates.empty()) {
        ::std::cout << prefix << "  sub templates: " << ::std::endl;
        typedef ::std::map< ::std::string, file_template >::iterator sub_it_t;
        for (sub_it_t sub = sub_templates.begin(); sub != sub_templates.end(); ++sub) {
          ::std::string new_prefix = prefix;
          new_prefix.append("    ");
          sub->second.debug(new_prefix);
        }
      }
    }

  } // namespace utils
} // namespace gtulu
