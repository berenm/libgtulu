/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_BUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_BUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/conversions/data.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {

#define BUFFER_SLOTS ((array_buffer, GL_ARRAY_BUFFER)) \
                     ((copy_read_buffer, GL_COPY_READ_BUFFER)) \
                     ((copy_write_buffer, GL_COPY_WRITE_BUFFER)) \
                     ((element_array_buffer, GL_ELEMENT_ARRAY_BUFFER)) \
                     ((pixel_pack_buffer, GL_PIXEL_PACK_BUFFER)) \
                     ((pixel_unpack_buffer, GL_PIXEL_UNPACK_BUFFER)) \
                     ((texture_buffer, GL_TEXTURE_BUFFER)) \
                     ((transform_feedback_buffer, GL_TRANSFORM_FEEDBACK_BUFFER)) \
                     ((uniform_buffer, GL_UNIFORM_BUFFER)) \

      //    ((draw_indirect_buffer, GL_DRAW_INDIRECT_BUFFER))

      namespace slots {
#define CONSTANT_LIST BUFFER_SLOTS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
      } // namespace slots

#define BUFFER_USAGES ((stream_draw, GL_STREAM_DRAW)) \
                      ((stream_read, GL_STREAM_READ)) \
                      ((stream_copy, GL_STREAM_COPY)) \
                      ((static_draw, GL_STATIC_DRAW)) \
                      ((static_read, GL_STATIC_READ)) \
                      ((static_copy, GL_STATIC_COPY)) \
                      ((dynamic_draw, GL_DYNAMIC_DRAW)) \
                      ((dynamic_read, GL_DYNAMIC_READ)) \
                      ((dynamic_copy, GL_DYNAMIC_COPY)) \

      namespace usages {
#define CONSTANT_LIST BUFFER_USAGES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
      } // namespace usages
    } // namespace buffer

    namespace gib = ::gtulu::internal::buffer;
    namespace gibs = ::gtulu::internal::buffer::slots;
    namespace gibu = ::gtulu::internal::buffer::usages;

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< buffer_base >::bind(const plug< buffer_base >& pluggable_object) {
        __gl_debug(glBindBuffer, (gibs::from_type< target_type_t >())(*pluggable_object))
        glBindBuffer(gibs::from_type< target_type_t >::value, *pluggable_object);
        __gl_check_error
      }
      template< >
      template< typename target_type_t >
      void slot_binder< buffer_base >::clear() {
        __gl_debug(glBindBuffer, (gibs::from_type< target_type_t >())(0))
        glBindBuffer(gibs::from_type< target_type_t >::value, 0);
        __gl_check_error
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

          static inline void bind(const gio::plug< gio::buffer_base >& buffer, const ::boost::uint32_t index,
                                  const ::boost::uint32_t offset, const ::boost::uint32_t size) {
            __gl_debug(glBindBufferRange, (slots::from_type< slot_type_t >())(index)(*buffer)(offset)(size));
            glBindBufferRange(slots::from_type< slot_type_t >::value, index, *buffer, offset, size);
            __gl_check_error
          }

          static inline void bind(const gio::plug< gio::buffer_base >& buffer, const ::boost::uint32_t index) {
            __gl_debug(glBindBufferBase, (slots::from_type< slot_type_t >())(index)(*buffer));
            glBindBufferBase(slots::from_type< slot_type_t >::value, index, *buffer);
            __gl_check_error
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
          inline void bind(const ::boost::uint32_t index) const {
            slot_type_t::bind(*this, index);
          }

          template< typename slot_type_t >
          inline void bind(const ::boost::uint32_t index, const ::std::size_t offset, const ::std::size_t size) const {
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
            __gl_debug(glBufferData, (gibs::from_type< typename temporary_slot_type_t::type >())(size * sizeof(data_type_t))(data)(gibu::from_type< buffer_usage_t >()));
            glBufferData(gibs::from_type< typename temporary_slot_type_t::type >::value, size * sizeof(data_type_t),
                data, gibu::from_type< buffer_usage_t >::value);
            __gl_check_error
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
