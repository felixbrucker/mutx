#!/bin/bash

./autogen.sh
cd depends && make $MAKEJOBS
cd $TRAVIS_BUILD_DIR && ./configure --prefix=$TRAVIS_BUILD_DIR/depends/$HOST
make $MAKEJOBS