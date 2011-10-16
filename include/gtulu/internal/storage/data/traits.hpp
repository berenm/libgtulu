/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename DataType >
        struct data_traits {
            typedef DataType data_type_t;

            static void* write(data_type_t& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }

            static void const* read(data_type_t const& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }

            static std::size_t size(data_type_t const& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }

            static std::size_t width(data_type_t const& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }

            static std::size_t height(data_type_t const& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }

            static std::size_t depth(data_type_t const& data_in) {
              static_assert(!std::is_same< data_type_t, data_type_t >::value, "DataType has no known traits. Please specialize the data_traits structure for DataType, to provide the accessor functions.");
              return 0;
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_ */
