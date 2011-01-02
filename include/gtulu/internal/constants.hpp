/**
 * @file
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
#include <boost/mpl/int.hpp>
#include <boost/lexical_cast.hpp>

namespace gtulu {
  namespace internal {

    namespace constant {
      struct gl_constant_base {
        protected:
          ::std::string string_value;
          ::std::uint32_t uint32_value;

          gl_constant_base(char const* string_value_in, ::std::uint32_t uint32_value_in) :
            string_value(string_value_in), uint32_value(uint32_value_in) {
          }

        public:
          gl_constant_base() :
            string_value("<invalid-value>"), uint32_value(0xFFFFFFFF) {
          }
          gl_constant_base(gl_constant_base const& copy) :
            string_value(copy.string_value), uint32_value(copy.uint32_value) {
          }

          gl_constant_base& operator=(gl_constant_base const& copy_in) {
            string_value = copy_in.string_value;
            uint32_value = copy_in.uint32_value;
            return *this;
          }

          operator const ::std::string&() const {
            return string_value;
          }
          operator const ::std::uint32_t&() const {
            return uint32_value;
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
          runtime_constant(gl_constant_base const& base, ::std::uint32_t offset_in) :
            gl_constant_base(base) {
            string_value.erase(string_value.end() - 1);
            string_value += ::boost::lexical_cast< ::std::string >(offset_in);
            uint32_value += offset_in;
          }
      };

      struct invalid_constant: public gl_constant< ::boost::mpl::string< '<inv', 'alid', '-con', 'stan', 't>' >,
          ::boost::mpl::int_< 0xFFFFFF > > {
      };

    } // namespace constant

    namespace cst = ::gtulu::internal::constant;

  } // namespace internal
} // namespace gtulu

#include "gtulu/internal/generated/constants.hpp"

#endif /* GTULU_INTERNAL_CONSTANTS_HPP_ */
