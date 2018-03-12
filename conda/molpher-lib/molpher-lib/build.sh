#!/bin/bash

# setup the project
BUILD_DIR=$BASE_DIR/build/molpher-lib/
JOBS=`grep -c ^processor /proc/cpuinfo`
mkdir -p $BUILD_DIR
cd $BUILD_DIR
echo "Building molpher-lib binaries in: `pwd`"
cmake $BASE_DIR -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX -DINSTALL_TBB=OFF -DINSTALL_RDKit=OFF -DINSTALL_Boost=OFF

# build and install the C++ library
make -j $JOBS molpher_install

# build the bindings and install the Python package to the build environment
cd $BASE_DIR
cp res/SAScore.dat src/python/molpher/swig_wrappers/
$PYTHON setup.py install

# clean up
rm -rf ${BASE_DIR}/dist
rm -rf ${BASE_DIR}/build