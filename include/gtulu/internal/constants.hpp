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

      template< typename ConstantImpl >
      struct gl_constant: public gl_constant_base {
          static gl_constant< ConstantImpl > const instance;
          static gl_constant_base const& get() {
            return instance;
          }

        protected:
          gl_constant() :
              gl_constant_base(ConstantImpl::name, ConstantImpl::value) {
          }
      };

      template< typename ConstantImpl >
      gl_constant< ConstantImpl > const gl_constant< ConstantImpl >::instance;

      struct runtime_constant: public gl_constant_base {
          runtime_constant(gl_constant_base const& base, ::std::uint64_t offset_in) :
              gl_constant_base(base) {
            string_value.erase(string_value.end() - 1);
            string_value += ::boost::lexical_cast< ::std::string >(offset_in);
            integer_value += offset_in;
          }
      };

      struct invalid_constant: public gl_constant< invalid_constant > {
          static constexpr char name[] = "<invalid-constant>";
          static constexpr::std::uint64_t value = 0xFFFFFFFFFFFFFFFF;
      };

    } // namespace constant

    namespace cst = ::gtulu::internal::constant;

  } // namespace internal
} // namespace gtulu

#define IN_GTULU_INTERNAL_CONSTANTS_HPP_
#include "gtulu/internal/generated/constants.hpp"
#undef IN_GTULU_INTERNAL_CONSTANTS_HPP_

#endif /* GTULU_INTERNAL_CONSTANTS_HPP_ */
