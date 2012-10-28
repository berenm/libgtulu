/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifdef BOOST_BUILD_PCH_ENABLED

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

// #include <boost/gil/extension/io_new/png_all.hpp>
// #include <boost/gil/extension/io_new/targa_all.hpp>
// #include <boost/gil/extension/io_new/bmp_all.hpp>
// #include <boost/gil/extension/io_new/jpeg_all.hpp>
// #include <boost/gil/extension/io_new/pnm_all.hpp>
// #include <boost/gil/extension/io_new/tiff_all.hpp>
// #include <boost/gil/gil_all.hpp>

#include <type_traits>

#include <boost/config.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/preprocessor.hpp>
#include <boost/type_traits.hpp>
#include <boost/integer.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/thread.hpp>
#include <boost/filesystem.hpp>
#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/same_as.hpp>

#include "meta/type_aspects.hpp"

#include "gtulu/internal/format/shader.hpp"
#include "gtulu/internal/format/output.hpp"
#include "gtulu/internal/format/sampler.hpp"
#include "gtulu/internal/format/program.hpp"
#include "gtulu/internal/format/common.hpp"
#include "gtulu/internal/format/renderbuffer.hpp"
#include "gtulu/internal/format/uniform.hpp"
#include "gtulu/internal/format/data.hpp"
#include "gtulu/internal/format/texture.hpp"
#include "gtulu/internal/format/numeric.hpp"
#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/group.hpp"
#include "gtulu/internal/format/program/static.hpp"
#include "gtulu/internal/format/program/dynamic.hpp"
#include "gtulu/internal/format/constraint/sampler.hpp"
#include "gtulu/internal/format/constraint/common.hpp"
#include "gtulu/internal/format/constraint/data.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/group.hpp"
#include "gtulu/internal/format/constraint/target.hpp"
#include "gtulu/internal/format/constraint/attribute.hpp"
#include "gtulu/internal/format/conversion/common.hpp"
#include "gtulu/internal/format/conversion/numeric.hpp"
#include "gtulu/internal/format/conversion/internal.hpp"
#include "gtulu/internal/format/conversion/group.hpp"
#include "gtulu/internal/format/shader/static.hpp"
#include "gtulu/internal/format/shader/dynamic.hpp"
#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/format/attribute.hpp"

#endif /*  BOOST_BUILD_PCH_ENABLED */
