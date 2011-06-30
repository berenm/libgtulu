# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

DESTDIR?=dist/
VARIANT?=debug
TOOLSET?=gcc

build: update-tools
	# building ${VARIANT}...
	bjam build ${VARIANT} --user-config=./build-config.jam --toolset=${TOOLSET}

clean: update-tools
	# clean...
	bjam --clean build --user-config=./build-config.jam --toolset=${TOOLSET}

install: update-tools
	# install...
	bjam install ${VARIANT} --user-config=./build-config.jam --prefix=${DESTDIR} --toolset=${TOOLSET}

uninstall: update-tools
	# uninstall...
	bjam --clean install --user-config=./build-config.jam --prefix=${DESTDIR} --toolset=${TOOLSET}

distclean: update-tools clean

update-tools:
	# updating tools...
	@git remote add build-tools http://github.com/rout/boost-build-tools.git 2>/dev/null |:
	@git fetch build-tools master:build-tools 2>/dev/null                                |:
	@git checkout build-tools Makefile fhs.jam build-config.jam                          |:
	@git reset fhs.jam build-config.jam 2>/dev/null                                      |:
	@git branch -D build-tools 2>/dev/null 1>/dev/null                                   |:
	@git remote rm build-tools                                                           |:
