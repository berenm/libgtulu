/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef CONSTANTS_MACROS_HPP_
#define CONSTANTS_MACROS_HPP_

#include <string>
#include <ostream>

#include <boost/preprocessor.hpp>

#define BEGIN_DECLARE_CONSTANTS \
  struct gl_constant { \
      static gl_constant get(const ::boost::uint32_t value); \
      static gl_constant get(const ::std::string& value); \
      ::std::string name; \
      ::boost::uint32_t value; \
      gl_constant() { gl_constant("<invalid-type>", -1); } \
   \
    protected: \
      explicit gl_constant(const ::boost::uint32_t value_p) : name("<unknown-type>"), value(value_p) {} \
      explicit gl_constant(const char name_p[]) : name(name_p), value(-1) {} \
      gl_constant(const char name_p[], const ::boost::uint32_t value_p) : name(name_p), value(value_p) {} \
  }; \
  template< typename type_t > struct from_type; \
  template< ::boost::uint32_t value_t > struct from_value; \


#define END_DECLARE_CONSTANTS \

#define DECLARE_CONSTANT(type_m, value_m) \
  struct BOOST_PP_CAT(gl_, type_m) : public gl_constant { \
      static const ::boost::uint32_t value = value_m; \
      typedef BOOST_PP_CAT(gl_, type_m) type; \
    public: \
      BOOST_PP_CAT(gl_, type_m)() : gl_constant(BOOST_PP_STRINGIZE(type_m), value_m) {} \
  }; \
  template< > \
  struct from_type< BOOST_PP_CAT(gl_, type_m) > : public BOOST_PP_CAT(gl_, type_m) { \
      using BOOST_PP_CAT(gl_, type_m)::value; \
      using BOOST_PP_CAT(gl_, type_m)::type; \
  }; \
  template< > \
  struct from_value< value_m > : public BOOST_PP_CAT(gl_, type_m) { \
      using BOOST_PP_CAT(gl_, type_m)::value; \
      using BOOST_PP_CAT(gl_, type_m)::type; \
  }; \


#define DECLARE_CONSTANT_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DECLARE_CONSTANT BOOST_PP_APPLY((tuple_m))) \

#define BEGIN_DECLARE_OUTPUT_CONSTANTS \
  ::std::ostream& operator<<(::std::ostream& o, const gl_constant& c); \

#define END_DECLARE_OUTPUT_CONSTANTS \

#define DECLARE_OUTPUT_CONSTANT(type_m, value_m) \
  ::std::ostream& operator<<(::std::ostream& o, const from_value< value_m >& c); \
  ::std::ostream& operator<<(::std::ostream& o, const from_type< BOOST_PP_CAT(gl_, type_m) >& c); \

#define DECLARE_OUTPUT_CONSTANT_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DECLARE_OUTPUT_CONSTANT BOOST_PP_APPLY((tuple_m))) \


#define DECLARE_CONSTANTS(list_m) \
  BEGIN_DECLARE_CONSTANTS \
  BOOST_PP_SEQ_FOR_EACH(DECLARE_CONSTANT_TUPLE, ~, list_m) \
  END_DECLARE_CONSTANTS \
  BEGIN_DECLARE_OUTPUT_CONSTANTS \
  BOOST_PP_SEQ_FOR_EACH(DECLARE_OUTPUT_CONSTANT_TUPLE, ~, list_m) \
  END_DECLARE_OUTPUT_CONSTANTS \


#define BEGIN_DEFINE_CONSTANTS \
  gl_constant gl_constant::get(const ::boost::uint32_t value) { \
    switch (value) { \

#define BEGIN_DEFINE_CONSTANTS_STR \
  gl_constant gl_constant::get(const ::std::string& value) { \
    { \

#define END_DEFINE_CONSTANTS \
    } \
    return gl_constant(value); \
  } \

#define END_DEFINE_CONSTANTS_STR \
    } \
    return gl_constant(value.c_str()); \
  } \

#define DEFINE_CONSTANT(type_m, value_m) \
  case value_m: return from_value< value_m >(); \

#define DEFINE_CONSTANT_STR(type_m, value_m) \
  if(value.compare( BOOST_PP_STRINGIZE(type_m) ) == 0) return from_value< value_m >(); \

#define DEFINE_CONSTANT_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DEFINE_CONSTANT BOOST_PP_APPLY((tuple_m))) \

#define DEFINE_CONSTANT_STR_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DEFINE_CONSTANT_STR BOOST_PP_APPLY((tuple_m))) \

#define BEGIN_DEFINE_OUTPUTS \
  ::std::ostream& operator<<(::std::ostream& o, const gl_constant& c) { \
    return o << c.name; \
  } \

#define END_DEFINE_OUTPUTS \

#define DEFINE_OUTPUT(type_m, value_m) \
  ::std::ostream& operator<<(::std::ostream& o, const from_value< value_m >& c) { \
    return o << BOOST_PP_STRINGIZE(type_m); \
  } \
  ::std::ostream& operator<<(::std::ostream& o, const from_type< BOOST_PP_CAT(gl_, type_m) >& c) { \
    return o << BOOST_PP_STRINGIZE(type_m); \
  } \

#define DEFINE_OUTPUT_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DEFINE_OUTPUT BOOST_PP_APPLY((tuple_m))) \


#define DEFINE_CONSTANTS(list_m) \
  BEGIN_DEFINE_CONSTANTS \
  BOOST_PP_SEQ_FOR_EACH(DEFINE_CONSTANT_TUPLE, ~, list_m) \
  END_DEFINE_CONSTANTS \
  BEGIN_DEFINE_CONSTANTS_STR \
  BOOST_PP_SEQ_FOR_EACH(DEFINE_CONSTANT_STR_TUPLE, ~, list_m) \
  END_DEFINE_CONSTANTS_STR \
  BEGIN_DEFINE_OUTPUTS \
  BOOST_PP_SEQ_FOR_EACH(DEFINE_OUTPUT_TUPLE, ~, list_m) \
  END_DEFINE_OUTPUTS \


#endif /* CONSTANTS_MACROS_HPP_ */
