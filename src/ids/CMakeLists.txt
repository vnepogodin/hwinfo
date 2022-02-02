add_executable(check_hd
   check_hd.c
   )

add_custom_command(
    OUTPUT hd_ids.h
    TARGET check_hd
    POST_BUILD
    COMMAND ./check_hd --check --sort --cfile hd_ids.h src/bus src/class src/extra src/special src/scanner src/network src/usb src/usb2 src/isapnp src/monitor src/camera src/tv2 src/tv src/dvb2 src/dvb src/chipcard src/modem src/pcmcia src/s390 src/sdio src/x11.amd64 src/pci src/storage src/sound src/mouse src/braille
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

#include_directories(${PROJECT_BINARY_DIR}/src/hd ${CMAKE_CURRENT_PROJECT_DIR}../hd)

#add_library(isdn STATIC ${LIB_SOURCES})
#add_library(isdn::isdn ALIAS isdn)

#add_dependencies(isdn isdn_cdb mk_isdnhwdb)
