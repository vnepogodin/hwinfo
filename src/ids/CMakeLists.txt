add_executable(check_hd
   check_hd.c
   )

add_custom_command(
    TARGET check_hd
    POST_BUILD
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/check_hd --check --sort --cfile hd_ids.h src/bus src/class src/extra src/special src/scanner src/network src/usb src/usb2 src/isapnp src/monitor src/camera src/tv2 src/tv src/dvb2 src/dvb src/chipcard src/modem src/pcmcia src/s390 src/sdio src/x11.amd64 src/pci src/storage src/sound src/mouse src/braille
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
