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
      static std::string get_contents(boost::filesystem::path const& path);
    };

    struct file_template {
      protected:
        std::string                name;
        std::vector< std::string > arguments;
        std::string                end_name;

        std::string raw_data;
        std::string content;

        std::map< std::string, file_template > sub_templates;

        void parse(boost::sregex_iterator& iterator);

      public:
        file_template();
        explicit file_template(boost::sregex_iterator& iterator);
        file_template(file_template const& copy);
        file_template(std::string const& template_file, boost::filesystem::path const& template_path="include/gtulu/templates/");

        void reset();

        file_template get(std::string const& sub_template);

        std::string get_content();

        void populate(std::map< std::string, std::string >& arguments, std::vector< file_template > sub_templates=std::vector< file_template >());

        void debug(std::string prefix="");
    };

  } // namespace utils
} // namespace gtulu

#endif /* GTULU_UTILS_FILE_HPP_ */
