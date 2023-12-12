#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Nelamin2/alx-low_level_programming/master/0x18-dynamic_libraries/libtask4.so
export LD_PRELOAD=:$PWD/../libtask4.so

