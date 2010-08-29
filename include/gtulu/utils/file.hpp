/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_UTILS_FILE_HPP_
#define GTULU_UTILS_FILE_HPP_

#include <boost/filesystem.hpp>
#include <boost/regex.hpp>

#include <string>
#include <map>
#include <vector>

namespace gtulu {
  namespace utils {

    struct file {
        static ::std::string get_contents(const ::boost::filesystem::path& path);
    };

    struct file_template {
      protected:
        ::std::string name;
        ::std::vector< ::std::string > arguments;
        ::std::string end_name;

        ::std::string raw_data;
        ::std::string content;

        ::std::map< ::std::string, file_template > sub_templates;

        void parse(::boost::sregex_iterator& iterator);

      public:
        file_template();
        explicit file_template(::boost::sregex_iterator& iterator);
        file_template(const file_template& copy);
        file_template(const ::std::string& template_file, const ::boost::filesystem::path& template_path =
            "include/gtulu/templates/");

        void reset();

        file_template get(const ::std::string& sub_template);

        ::std::string get_content();

        void populate(::std::map< ::std::string, ::std::string >& arguments_in,
                      ::std::vector< file_template > sub_templates = ::std::vector< file_template >());

        void debug(::std::string prefix = "");
    };

  } // namespace utils
} // namespace gtulu

#endif /* GTULU_UTILS_FILE_HPP_ */
