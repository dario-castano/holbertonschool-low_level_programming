#/bin/bash
wget -P ../ https://github.com/dario-castano/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=../libinject.so
