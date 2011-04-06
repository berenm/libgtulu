DESTDIR?=dist/
VARIANT?=debug

build: update-tools
	# building ${VARIANT}...
	bjam build ${VARIANT} --user-config=./build-config.jam

clean: update-tools
	# clean...
	bjam --clean --user-config=./build-config.jam

install: update-tools
	# install...
	bjam install ${VARIANT} --user-config=./build-config.jam --prefix=${DESTDIR}

distclean: update-tools clean

update-tools:
	# updating tools...
	@git remote add build-tools http://github.com/rout/boost-build-tools.git 2>/dev/null |:
	@git fetch build-tools master:build-tools 2>/dev/null
	@git checkout build-tools `git ls-tree --name-only build-tools | grep -v '^\.'`
	@git reset `git ls-tree --name-only build-tools | grep -v '^\.'` 2>/dev/null |:
	@git branch -D build-tools 2>/dev/null 1>/dev/null
	@git remote rm build-tools
