# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

DESTDIR?=
TOOLSET?=clang
ARCH?=$(shell dpkg-architecture -qDEB_HOST_ARCH)
UPDATE?=no

build-debug: update-tools
	# building debug...
	b2 build --user-config=./build-config.jam --toolset=${TOOLSET} target-architecture=$(ARCH) -j2 debug

build: update-tools
	# building release...
	b2 build --user-config=./build-config.jam --toolset=${TOOLSET} target-architecture=$(ARCH) -j2 release

clean: update-tools
	# clean...
	b2 build --user-config=./build-config.jam --toolset=${TOOLSET} target-architecture=$(ARCH) -j2 --clean

install: update-tools
	# install...
	b2 install --user-config=./build-config.jam --toolset=${TOOLSET} target-architecture=$(ARCH) -j2 release --prefix=/usr/local --stagedir=${DESTDIR}

uninstall: update-tools
	# uninstall...
	b2 install --user-config=./build-config.jam --toolset=${TOOLSET} target-architecture=$(ARCH) -j2 --clean --prefix=/usr/local --stagedir=${DESTDIR}

distclean: update-tools clean

update-tools:
	# updating tools...
	@[ "$(UPDATE)" = "yes" ] && git remote add build-tools http://github.com/berenm/boost-build-tools.git 2>/dev/null ||:
	@[ "$(UPDATE)" = "yes" ] && git fetch build-tools master:build-tools 2>/dev/null                                  ||:
	@[ "$(UPDATE)" = "yes" ] && git checkout build-tools Makefile multiarch.jam build-config.jam                      ||:
	@[ "$(UPDATE)" = "yes" ] && git reset fhs.jam build-config.jam 2>/dev/null                                        ||:
	@[ "$(UPDATE)" = "yes" ] && git branch -D build-tools 2>/dev/null 1>/dev/null                                     ||:
	@[ "$(UPDATE)" = "yes" ] && git remote rm build-tools                                                             ||:
