/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/object/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename TextureFormat >
        struct texture_lod {
            typedef obj::texture< TextureFormat > store_type;
            typedef data::data_traits< store_type > store_traits;

            texture_lod(store_type& store, std::uint32_t const level = 0) :
                store_(store), level_(level) {
            }

            store_type& store() {
              return store_;
            }

            uint8_t* write() const {
              return store_traits::write(store);
            }

            uint8_t const* read() const {
              return store_traits::read(store);
            }

            std::size_t value_size() const {
              return store_traits::value_size(store);
            }

            std::size_t size() const {
              return 0;
            }

            std::size_t width() const {
              return width_;
            }

            std::size_t height() const {
              return height_;
            }

            std::size_t depth() const {
              return depth_;
            }

            std::uint32_t level() const {
              return level_;
            }

          private:
            store_type& store_;
            std::uint32_t level_;
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_ */
