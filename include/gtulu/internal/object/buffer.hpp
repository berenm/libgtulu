/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_BUFFER_HPP_
#define GTULU_INTERNAL_OBJECT_BUFFER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"

#include "gtulu/internal/format/data.hpp"
#include "gtulu/internal/format/conversion/numeric.hpp"

#include "gtulu/internal/object/buffer/usage.hpp"
#include "gtulu/internal/object/buffer/slot.hpp"

#include "gtulu/internal/storage.hpp"
#include "gtulu/internal/storage/data/empty.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {

      META_ASPECT_DECLARE(parameter,
                          Parameter,
                          using cst::,
                                (gl_buffer_access) (gl_buffer_mapped) (gl_buffer_size) (gl_buffer_usage))

    } // namespace buffer

    namespace object {

      struct buffer_base : public plug< buffer_base > {
        template< typename SlotType >
        inline void bind() const {
          SlotType::bind(*this);

        }

        template< typename SlotType >
        inline void bind(std::uint32_t const index) const {
          SlotType::bind(*this, index);
        }

        template< typename SlotType >
        inline void bind(std::uint32_t const index, std::size_t const offset, std::size_t const size) const {
          SlotType::bind(*this, index, offset, size);
        }

        template< typename SlotType >
        inline void unbind() const {
          SlotType::unbind(*this);
        }

      };

      template< typename DataFormat >
      struct buffer : virtual public buffer_base, virtual public object< buffer_base > {
        public:
          typedef typename fcmn::to_value_type< DataFormat >::type data_type_t;

          buffer() :
            object< buffer_base >() {}

          template< typename BufferUsage = buf::usage::gl_stream_draw > buffer(std::size_t const size) :
            object< buffer_base >() {
            resize< BufferUsage >(size);
          }

          template< typename SourceStore, typename BufferUsage = buf::usage::gl_stream_draw > buffer(SourceStore const& source_store) :
            object< buffer_base >() {
            sto::init< BufferUsage >(*this, source_store);
          }

          template< typename BufferUsage = buf::usage::gl_stream_draw >
          void resize(std::size_t const size) {
            sto::init< BufferUsage >(*this, sto::data::empty< DataFormat >(size));
          }

          template< typename Parameter, typename TemporarySlotType = buf::copy_read_buffer_slot >
          int get() {
            std::uint32_t data;

            typedef typename TemporarySlotType::type slot_t;
            fct::get_buffer_parameter< slot_t, Parameter >::call(&data);
            return data;
          }

      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_BUFFER_HPP_ */
