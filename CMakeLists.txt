cmake_minimum_required(VERSION 3.6)

project(hd
        VERSION 21.80
        LANGUAGES C)

include(GNUInstallDirs)

add_subdirectory(src/isdn EXCLUDE_FROM_ALL)
add_subdirectory(src/ids EXCLUDE_FROM_ALL)

###
### hd library
###
configure_file(${PROJECT_SOURCE_DIR}/src/hd/version.h.in       ${PROJECT_BINARY_DIR}/src/hd/version.h)
message(STATUS "Wrote ${PROJECT_BINARY_DIR}/src/hd/version.h")

set(LIB_HEADERS
    src/hd/wlan.h
    src/hd/fb.h
    src/hd/cpu.h
    src/hd/drm.h
    src/hd/dvd.h
    src/hd/edd.h
    src/hd/hal.h
    src/hd/hdp.h
    src/hd/int.h
    src/hd/isa.h
    src/hd/kbd.h
    src/hd/net.h
    src/hd/pci.h
    src/hd/sys.h
    src/hd/usb.h
    src/hd/bios.h
    src/hd/hddb.h
    src/hd/isdn.h
    src/hd/klog.h
    src/hd/misc.h
    src/hd/prom.h
    src/hd/s390.h
    src/hd/sbus.h
    src/hd/serial.h
    src/hd/parallel.h
    src/hd/input.h
    src/hd/block.h
    src/hd/smbios.h
    src/hd/braille.h
    src/hd/fb.h
    src/hd/floppy.h
    src/hd/hd_int.h
    src/hd/hddb_int.h
    src/hd/hwclass_names.h
    src/hd/isapnp.h
    src/hd/ibm-notebooks.h
    src/hd/manual.h
    src/hd/memory.h
    src/hd/modem.h
    src/hd/monitor.h
    src/hd/mouse.h
    src/hd/pppoe.h
    src/hd/pcmcia.h
    src/hd/hd.h
)

set(LIB_SOURCES
    src/hd/wlan.c
    src/hd/fb.c
    src/hd/cpu.c
    src/hd/drm.c
    src/hd/dvd.c
    src/hd/edd.c
    src/hd/hal.c
    src/hd/hdp.c
    src/hd/int.c
    src/hd/isa.c
    src/hd/kbd.c
    src/hd/net.c
    src/hd/pci.c
    src/hd/sys.c
    src/hd/usb.c
    src/hd/bios.c
    src/hd/hddb.c
    src/hd/isdn.c
    src/hd/klog.c
    src/hd/misc.c
    src/hd/prom.c
    src/hd/s390.c
    src/hd/sbus.c
    src/hd/serial.c
    src/hd/parallel.c
    src/hd/block.c
    src/hd/input.c
    src/hd/smbios.c
    src/hd/braille.c
    src/hd/fb.c
    src/hd/floppy.c
    src/hd/isapnp.c
    src/hd/manual.c
    src/hd/mdt.c
    src/hd/memory.c
    src/hd/modem.c
    src/hd/mouse.c
    src/hd/monitor.c
    src/hd/pcmcia.c
    src/hd/pppoe.c
    src/hd/hd.c
    src/isdn/cdbisdn.c
    src/isdn/isa_probe.c
    src/ids/hd_ids.c
)

include_directories(${PROJECT_BINARY_DIR}/src/hd src/hd src/isdn src/ids)

add_library(hd STATIC ${LIB_SOURCES} ${LIB_HEADERS})
add_library(hd::hd ALIAS hd)
target_link_libraries(hd isdn::isdn)
add_dependencies(hd check_hd)

install(TARGETS hd
  LIBRARY DESTINATION lib
)
