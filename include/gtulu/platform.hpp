/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_PLATFORM_HPP_
#define GTULU_PLATFORM_HPP_

#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__GNU__) || defined(__GLIBC__)
#  define GTULU_PLATFORM_LINUX

#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
#  define GTULU_PLATFORM_BSD

#elif defined(sun) || defined(__sun)
#  define GTULU_PLATFORM_SOLARIS

#elif defined(__sgi)
#  define GTULU_PLATFORM_IRIX

#elif defined(__hpux)
#  define GTULU_PLATFORM_HPUX

#elif defined(__CYGWIN__)
#  define GTULU_PLATFORM_CYGWIN

#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#  define GTULU_PLATFORM_WIN32

#elif defined(__BEOS__)
#  define GTULU_PLATFORM_BEOS

#elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
#  define GTULU_PLATFORM_MACOS

#elif defined(__IBMCPP__) || defined(_AIX)
#  define GTULU_PLATFORM_AIX

#elif defined(__amigaos__)
#  define GTULU_PLATFORM_AMIGAOS

#elif defined(__QNXNTO__)
#  define GTULU_PLATFORM_QNXNTO

#elif defined(__VXWORKS__)
#  define GTULU_PLATFORM_VXWORKS

#elif defined(__SYMBIAN32__)
#  define GTULU_PLATFORM_SYMBIAN32

#elif defined(__VMS)
#  define GTULU_PLATFORM_VMS

#elif defined(unix) \
      || defined(__unix) \
      || defined(_XOPEN_SOURCE) \
      || defined(_POSIX_SOURCE)
#  define GTULU_PLATFORM_UNIX

#else
#  define GTULU_PLATFORM_OTHER

#endif

#endif /* GTULU_PLATFORM_HPP_ */
