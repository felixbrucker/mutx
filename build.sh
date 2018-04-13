#!/bin/bash

set -e

./autogen.sh
cd depends && make $MAKEJOBS
cd $TRAVIS_BUILD_DIR && ./configure --prefix=$TRAVIS_BUILD_DIR/depends/$HOST $CONF
make $MAKEJOBS
echo "all done"
exit 0
