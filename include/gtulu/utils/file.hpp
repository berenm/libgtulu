/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_UTILS_FILE_HPP_
#define GTULU_UTILS_FILE_HPP_

#include "gtulu/namespaces.hpp"

#include <boost/filesystem.hpp>
#include <boost/regex.hpp>

#include <string>
#include <map>
#include <vector>

namespace gtulu {
  namespace utils {

    struct file {
        static std::string get_contents(boost::filesystem::path const& path_in);
    };

    struct file_template {
      protected:
        std::string name;
        std::vector< std::string > arguments;
        std::string end_name;

        std::string raw_data;
        std::string content;

        std::map< std::string, file_template > sub_templates;

        void parse(boost::sregex_iterator& iterator_inout);

      public:
        file_template();
        explicit file_template(boost::sregex_iterator& iterator_inout);
        file_template(file_template const& copy_in);
        file_template(std::string const& template_file_in,
                      boost::filesystem::path const& template_path_in = "include/gtulu/templates/");

        void reset();

        file_template get(std::string const& sub_template_in);

        std::string get_content();

        void populate(std::map< std::string, std::string >& arguments_inout,
        std::vector< file_template > sub_templates_in = std::vector< file_template >());

        void debug(std::string prefix_in = "");
    };

  } // namespace utils
} // namespace gtulu

#endif /* GTULU_UTILS_FILE_HPP_ */
