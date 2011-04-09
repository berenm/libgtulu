/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef _COMMON_H
#define	_COMMON_H

void init_gl(int argc, char** argv);
void close_gl();
void main_loop();
void swap_buffers();

void do_frame();

#endif	/* _COMMON_H */

