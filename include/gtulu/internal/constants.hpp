/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 2 sept. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_CONSTANTS_HPP_
#define GTULU_INTERNAL_CONSTANTS_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/opengl.hpp"

#include <string>

#define BOOST_MPL_LIMIT_STRING_SIZE 52
#include <boost/mpl/string.hpp>

// define unsigned integer 64 ::boost::mpl integral
#define AUX_WRAPPER_VALUE_TYPE ::std::uint64_t
#define AUX_WRAPPER_NAME uint64_
#define AUX_WRAPPER_PARAMS(N) ::std::uint64_t N
#include <boost/mpl/aux_/integral_wrapper.hpp>
#undef AUX_WRAPPER_VALUE_TYPE
#undef AUX_WRAPPER_NAME
#undef AUX_WRAPPER_PARAMS

#include <boost/lexical_cast.hpp>

namespace gtulu {
  namespace internal {

    namespace constant {
      struct gl_constant_base {
        protected:
          ::std::string string_value;
          ::std::uint64_t integer_value;

          gl_constant_base(char const* string_value_in, ::std::uint64_t integer_value_in) :
            string_value(string_value_in), integer_value(integer_value_in) {
          }

        public:
          gl_constant_base() :
            string_value("<invalid-value>"), integer_value(0xFFFFFFFF) {
          }
          gl_constant_base(gl_constant_base const& copy) :
            string_value(copy.string_value), integer_value(copy.integer_value) {
          }

          gl_constant_base& operator=(gl_constant_base const& copy_in) {
            string_value = copy_in.string_value;
            integer_value = copy_in.integer_value;
            return *this;
          }

          operator ::std::string const&() const {
            return string_value;
          }
          operator ::std::uint64_t const&() const {
            return integer_value;
          }

          friend ::std::ostream& operator<<(::std::ostream& stream_inout, gl_constant_base const& constant_in);
      };

      template< typename name_t, typename value_t >
      struct gl_constant: public gl_constant_base, public value_t {
          typedef name_t name_type;
          typedef value_t value_type;

          using value_type::value;
          struct name: public ::boost::mpl::c_str< name_type > {
              using ::boost::mpl::c_str< name_type >::value;
          };

          static gl_constant< name_t, value_t > const instance;
          static gl_constant_base const& get() {
            return instance;
          }

        protected:
          gl_constant() :
            gl_constant_base(name::value, value_type::value) {
          }
      };

      template< typename name_t, typename value_t >
      gl_constant< name_t, value_t > const gl_constant< name_t, value_t >::instance;

      struct runtime_constant: public gl_constant_base {
          runtime_constant(gl_constant_base const& base, ::std::uint64_t offset_in) :
            gl_constant_base(base) {
            string_value.erase(string_value.end() - 1);
            string_value += ::boost::lexical_cast< ::std::string >(offset_in);
            integer_value += offset_in;
          }
      };

      struct invalid_constant: public gl_constant< ::boost::mpl::string< '<inv', 'alid', '-con', 'stan', 't>' >,
          ::boost::mpl::int_< 0xFFFFFF > > {
      };

    } // namespace constant

    namespace cst = ::gtulu::internal::constant;

  } // namespace internal
} // namespace gtulu

#define IN_GTULU_INTERNAL_CONSTANTS_HPP_
#include "gtulu/internal/generated/constants.hpp"
#undef IN_GTULU_INTERNAL_CONSTANTS_HPP_

#endif /* GTULU_INTERNAL_CONSTANTS_HPP_ */
