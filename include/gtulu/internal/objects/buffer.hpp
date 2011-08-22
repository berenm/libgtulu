/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_BUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_BUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/conversions/data.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {

      namespace slots {
        using cst::gl_array_buffer;
        using cst::gl_copy_read_buffer;
        using cst::gl_copy_write_buffer;
        using cst::gl_element_array_buffer;
        using cst::gl_pixel_pack_buffer;
        using cst::gl_pixel_unpack_buffer;
        using cst::gl_texture_buffer;
        using cst::gl_transform_feedback_buffer;
        using cst::gl_uniform_buffer;
        using cst::gl_draw_indirect_buffer;
      } // namespace slots

      namespace usages {
        using cst::gl_stream_draw;
        using cst::gl_stream_read;
        using cst::gl_stream_copy;
        using cst::gl_static_draw;
        using cst::gl_static_read;
        using cst::gl_static_copy;
        using cst::gl_dynamic_draw;
        using cst::gl_dynamic_read;
        using cst::gl_dynamic_copy;
      } // namespace usages
    } // namespace buffer

    namespace gib = ::gtulu::internal::buffer;
    namespace gibs = ::gtulu::internal::buffer::slots;
    namespace gibu = ::gtulu::internal::buffer::usages;

    namespace objects {
      template< >
      template< typename TargetType >
      void slot_binder< buffer_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_bind_buffer::call< TargetType >(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace objects

    namespace buffer {
      template< typename SlotType >
      struct buffer_slot {
          typedef SlotType type;

          static inline void bind(gio::plug< gio::buffer_base > const& buffer) {
            gio::slot_binder< gio::buffer_base >::bind< SlotType >(buffer);
          }
          static inline void unbind(gio::plug< gio::buffer_base > const& buffer) {
            gio::slot_binder< gio::buffer_base >::clear< SlotType >();
          }
      };

      template< typename SlotType >
      struct buffer_indexed_slot: public buffer_slot< SlotType > {
          typedef SlotType type;

          using buffer_slot< SlotType >::bind;
          using buffer_slot< SlotType >::unbind;

          static inline void bind(gio::plug< gio::buffer_base > const& buffer,
                                  ::std::uint32_t const index,
                                  ::std::uint32_t const offset,
                                  ::std::uint32_t const size) {
            fnc::gl_bind_buffer_range::call< SlotType >(index, *buffer, offset, size);
          }

          static inline void bind(gio::plug< gio::buffer_base > const& buffer, ::std::uint32_t const index) {
            fnc::gl_bind_buffer_base::call< SlotType >(index, *buffer);
          }
      };
#define DECLARE_SLOT(slot_type_m) \
  typedef buffer_slot< slots::gl_##slot_type_m > slot_type_m##_slot; \

#define DECLARE_INDEXED_SLOT(slot_type_m) \
  typedef buffer_indexed_slot< slots::gl_##slot_type_m > slot_type_m##_slot; \

      DECLARE_SLOT(array_buffer)
      DECLARE_SLOT(copy_read_buffer)
      DECLARE_SLOT(copy_write_buffer)
      //  DECLARE_SLOT(draw_indirect_buffer)
      DECLARE_SLOT(element_array_buffer)
      DECLARE_SLOT(pixel_pack_buffer)
      DECLARE_SLOT(pixel_unpack_buffer)
      DECLARE_SLOT(texture_buffer)
      DECLARE_INDEXED_SLOT(transform_feedback_buffer)
      DECLARE_INDEXED_SLOT(uniform_buffer)

#undef DECLARE_INDEXED_SLOT
#undef DECLARE_SLOT
    } // namespace buffer

    namespace objects {

      struct buffer_base: public plug< buffer_base > {
          template< typename SlotType >
          inline void bind() const {
            SlotType::bind(*this);
          }

          template< typename SlotType >
          inline void bind(::std::uint32_t const index) const {
            SlotType::bind(*this, index);
          }

          template< typename SlotType >
          inline void bind(::std::uint32_t const index, ::std::size_t const offset, ::std::size_t const size) const {
            SlotType::bind(*this, index, offset, size);
          }

          template< typename SlotType >
          inline void unbind() const {
            SlotType::unbind(*this);
          }

        protected:
          ::std::size_t size;

          void set_size(::std::size_t const size_in) {
            size = size_in;
          }

        public:
          ::std::size_t get_size() {
            return size;
          }
      };

      template< typename BufferFormat, typename BufferUsage = gib::usages::gl_stream_draw >
      struct buffer: public buffer_base, public object< buffer_base > {
        public:
          typedef typename fd::to_typename< typename BufferFormat::info::value_type >::type data_type_t;

          buffer() :
              object< buffer_base >() {
          }

          buffer(::std::size_t const size, data_type_t const* data = 0) :
              object< buffer_base >() {
            init_store(size, data);
          }

          template< typename TemporarySlotType = gib::copy_write_buffer_slot >
          inline void init_store(::std::size_t const size, data_type_t const* data = 0) {
            bind< TemporarySlotType >();

            typedef typename TemporarySlotType::type slot_t;
            fnc::gl_buffer_data::call< slot_t, BufferUsage >(size * sizeof(data_type_t), data);

            set_size(size);
          }

          /**
           * Reads data from the buffer.
           *
           * @param data_inout
           * @param size_in
           * @param offset_in
           */
          template< typename TemporarySlotType = gib::copy_read_buffer_slot >
          void read(data_type_t* data_inout, ::std::size_t const size_in = 0, ::std::size_t const offset_in = 0) {
            ::std::size_t const size = (size_in == 0) ? get_size() : size_in;

            bind< TemporarySlotType >();

            typedef typename TemporarySlotType::type slot_t;
            fnc::gl_get_buffer_sub_data::call< slot_t >(offset_in, size * sizeof(data_type_t), data_inout);
          }

          /**
           * Writes data to the buffer.
           *
           * @param data_in
           * @param size_in
           * @param offset_in
           */
          template< typename TemporarySlotType = gib::copy_write_buffer_slot >
          void write(data_type_t const* data_in, ::std::size_t const size_in = 0, ::std::size_t const offset_in = 0) {
            ::std::size_t const size = (size_in == 0) ? get_size() : size_in;

            bind< TemporarySlotType >();

            typedef typename TemporarySlotType::type slot_t;
            fnc::gl_buffer_sub_data::call< slot_t >(offset_in, size * sizeof(data_type_t), data_in);
          }

          /**
           * Copies the buffer data to another buffer.
           *
           * @param dest_buffer_inout
           * @param size_in
           * @param write_offset_in
           * @param read_offset_in
           */
          template< typename DestBufferType, typename ReadSlotType = gib::copy_read_buffer_slot,
              typename WriteSlotType = gib::copy_write_buffer_slot >
          void copy(DestBufferType& dest_buffer_inout,
                    ::std::size_t const size_in = 0,
                    ::std::size_t const write_offset_in = 0,
                    ::std::size_t const read_offset_in = 0) {
            ::std::size_t const size = (size_in == 0) ? get_size() : size_in;

            bind< ReadSlotType >();
            dest_buffer_inout.bind< WriteSlotType >();

            typedef typename ReadSlotType::type read_slot_t;
            typedef typename WriteSlotType::type write_slot_t;
            fnc::gl_copy_buffer_sub_data::call< read_slot_t, write_slot_t >(read_offset_in,
                                                                            write_offset_in,
                                                                            size * sizeof(data_type_t));
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_BUFFER_HPP_ */
