add_subdirectory(cdb EXCLUDE_FROM_ALL)

set(LIB_SOURCES
    cdbisdn.c
)

include_directories(${PROJECT_BINARY_DIR}/src/hd ${CMAKE_CURRENT_PROJECT_DIR}../hd)

add_library(isdn STATIC ${LIB_SOURCES})
add_library(isdn::isdn ALIAS isdn)

add_dependencies(isdn isdn_cdb mk_isdnhwdb)
