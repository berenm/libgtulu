/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_NAMESPACES_HPP_
#define GTULU_NAMESPACES_HPP_

namespace boost {
  namespace filesystem {} // namespace filesystem
  namespace mpl {} // namespace mpl
} // namespace boost

namespace gtulu {
  namespace bfs = ::boost::filesystem;
  namespace bm  = ::boost::mpl;

  namespace internal {
    namespace format {
      namespace attribute {} // namespace attribute
      namespace common {} // namespace common
      namespace data {} // namespace data
      namespace group {} // namespace group
      namespace internal {} // namespace internal
      namespace numeric {} // namespace numeric
      namespace output {} // namespace output
      namespace program {} // namespace program
      namespace renderbuffer {} // namespace renderbuffer
      namespace shader {} // namespace shader
      namespace sampler {} // namespace sampler
      namespace target {} // namespace target
      namespace texture {} // namespace texture
      namespace uniform {} // namespace uniform
    } // namespace format

    namespace fatt = format::attribute;
    namespace fcmn = format::common;
    namespace fdat = format::data;
    namespace fgrp = format::group;
    namespace fint = format::internal;
    namespace fnum = format::numeric;
    namespace fout = format::output;
    namespace fprg = format::program;
    namespace frdb = format::renderbuffer;
    namespace fshd = format::shader;
    namespace fsmp = format::sampler;
    namespace ftgt = format::target;
    namespace ftex = format::texture;
    namespace funf = format::uniform;

    namespace generated {} // namespace generated

    namespace gen = generated;

    namespace constant {} // namespace constant
    namespace function {} // namespace function

    namespace cst = constant;
    namespace fct = function;

    namespace attribute {} // namespace attribute
    namespace buffer {} // namespace buffer
    namespace compiler {} // namespace compiler
    namespace context {} // namespace context
    namespace data {} // namespace data
    namespace drawing {} // namespace drawing
    namespace error {} // namespace error
    namespace framebuffer {} // namespace framebuffer
    namespace object {} // namespace object
    namespace program {} // namespace program
    namespace property {} // namespace property
    namespace renderbuffer {} // namespace renderbuffer
    namespace sampler {} // namespace sampler
    namespace storage {} // namespace storage
    namespace texture {} // namespace texture
    namespace uniform {} // namespace uniform
    namespace vertexarray {} // namespace vertexarray

    namespace att = attribute;
    namespace buf = buffer;
    namespace cmp = compiler;
    namespace ctx = context;
    namespace dat = data;
    namespace drw = drawing;
    namespace err = error;
    namespace fbf = framebuffer;
    namespace obj = object;
    namespace prg = program;
    namespace pro = property;
    namespace rdb = renderbuffer;
    namespace smp = sampler;
    namespace sto = storage;
    namespace tex = texture;
    namespace unf = uniform;
    namespace vxa = vertexarray;
  } // namespace internal

  namespace gi = internal;

  namespace utils {} // namespace utils

  namespace gu = utils;
} // namespace gtulu

#endif /* GTULU_NAMESPACES_HPP_ */
