[![Build Status](https://travis-ci.com/SCLOUDFER/supertask.svg?branch=main)](https://travis-ci.com/SCLOUDFER/supertask)

## Build
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
- cmake --build _build --target install

## Test
- cmake --build _build --target test
