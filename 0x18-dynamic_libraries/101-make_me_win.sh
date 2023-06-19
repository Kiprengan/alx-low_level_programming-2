#!/bin/bash
wget https://raw.githubusercontent.com/nenojackline/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so litest.so
export LD_PRELOAD="./libtest.so"
