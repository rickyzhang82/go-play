#!/bin/bash
. ${IDF_PATH}/add_path.sh
/opt/local/bin/python2 ${IDF_PATH}/components/esptool_py/esptool/esptool.py --chip esp32 --port "/dev/cu.SLAB_USBtoUART" --baud $((230400*4)) write_flash -fs 4MB 0x200000 "$1"
