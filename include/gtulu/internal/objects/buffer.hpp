/**
 * @file
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
        typedef cst::gl_array_buffer gl_array_buffer;
        typedef cst::gl_copy_read_buffer gl_copy_read_buffer;
        typedef cst::gl_copy_write_buffer gl_copy_write_buffer;
        typedef cst::gl_element_array_buffer gl_element_array_buffer;
        typedef cst::gl_pixel_pack_buffer gl_pixel_pack_buffer;
        typedef cst::gl_pixel_unpack_buffer gl_pixel_unpack_buffer;
        typedef cst::gl_texture_buffer gl_texture_buffer;
        typedef cst::gl_transform_feedback_buffer gl_transform_feedback_buffer;
        typedef cst::gl_uniform_buffer gl_uniform_buffer;
        typedef cst::gl_draw_indirect_buffer gl_draw_indirect_buffer;
      } // namespace slots

      namespace usages {
        typedef cst::gl_stream_draw gl_stream_draw;
        typedef cst::gl_stream_read gl_stream_read;
        typedef cst::gl_stream_copy gl_stream_copy;
        typedef cst::gl_static_draw gl_static_draw;
        typedef cst::gl_static_read gl_static_read;
        typedef cst::gl_static_copy gl_static_copy;
        typedef cst::gl_dynamic_draw gl_dynamic_draw;
        typedef cst::gl_dynamic_read gl_dynamic_read;
        typedef cst::gl_dynamic_copy gl_dynamic_copy;
      } // namespace usages
    } // namespace buffer

    namespace gib = ::gtulu::internal::buffer;
    namespace gibs = ::gtulu::internal::buffer::slots;
    namespace gibu = ::gtulu::internal::buffer::usages;

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< buffer_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_bind_buffer::call< target_type_t >(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace objects

    namespace buffer {
      template< typename slot_type_t >
      struct buffer_slot {
          typedef slot_type_t type;

          static inline void bind(const gio::plug< gio::buffer_base >& buffer) {
            gio::slot_binder< gio::buffer_base >::bind< slot_type_t >(buffer);
          }
          static inline void unbind(const gio::plug< gio::buffer_base >& buffer) {
            gio::slot_binder< gio::buffer_base >::clear< slot_type_t >();
          }
      };

      template< typename slot_type_t >
      struct buffer_indexed_slot: public buffer_slot< slot_type_t > {
          typedef slot_type_t type;

          using buffer_slot< slot_type_t >::bind;
          using buffer_slot< slot_type_t >::unbind;

          static inline void bind(const gio::plug< gio::buffer_base >& buffer,
                                  const ::std::uint32_t index,
                                  const ::std::uint32_t offset,
                                  const ::std::uint32_t size) {
            fnc::gl_bind_buffer_range::call< slot_type_t >(index, *buffer, offset, size);
          }

          static inline void bind(const gio::plug< gio::buffer_base >& buffer, const ::std::uint32_t index) {
            fnc::gl_bind_buffer_base::call< slot_type_t >(index, *buffer);
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
          template< typename slot_type_t >
          inline void bind() const {
            slot_type_t::bind(*this);
          }

          template< typename slot_type_t >
          inline void bind(const ::std::uint32_t index) const {
            slot_type_t::bind(*this, index);
          }

          template< typename slot_type_t >
          inline void bind(const ::std::uint32_t index, const ::std::size_t offset, const ::std::size_t size) const {
            slot_type_t::bind(*this, index, offset, size);
          }

          template< typename slot_type_t >
          inline void unbind() const {
            slot_type_t::unbind(*this);
          }

        protected:
          ::std::size_t size;

          void set_size(const ::std::size_t size_in) {
            size = size_in;
          }

        public:
          ::std::size_t get_size() {
            return size;
          }
      };

      template< typename buffer_format_t, typename buffer_usage_t = gib::usages::gl_stream_draw >
      struct buffer: public buffer_base, public object< buffer_base > {
        public:
          typedef typename fd::to_typename< typename buffer_format_t::info::value_type >::type data_type_t;

          buffer() :
            object< buffer_base > () {
          }

          buffer(const ::std::size_t size, const data_type_t* data = 0) :
            object< buffer_base > () {
            fill(size, data);
          }

          template< typename temporary_slot_type_t = gib::array_buffer_slot >
          inline void fill(const ::std::size_t size, const data_type_t* data = 0) {
            bind< temporary_slot_type_t > ();

            fnc::gl_buffer_data::call< typename temporary_slot_type_t::type, buffer_usage_t >(size
                                                                                                  * sizeof(data_type_t),
                                                                                              data);

            set_size(size);
          }

          template< typename new_buffer_format_t, typename new_buffer_usage_t >
          operator const buffer< new_buffer_format_t, new_buffer_usage_t >&() const {
            return *reinterpret_cast< const buffer< new_buffer_format_t, new_buffer_usage_t >* > (this);
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_BUFFER_HPP_ */
