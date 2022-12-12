#!/bin/bash
wget -P /tmp https://github.com/cool-Moshood/alx-low_level_programming/blob/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
