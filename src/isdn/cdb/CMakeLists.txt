execute_process(COMMAND lex isdn_cdb.lex
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

add_executable(mk_isdnhwdb
   cdb_read.c
   mk_isdnhwdb.c
   )

#add_custom_command(
#    OUTPUT lex.yy.c
#    #TARGET mk_isdnhwdb
#    #PRE_BUILD
#    COMMAND lex isdn_cdb.lex
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)

add_executable(isdn_cdb
   cdb_read.c
   isdn_cdb.c
   )
add_dependencies(isdn_cdb mk_isdnhwdb)

add_custom_command(
    TARGET isdn_cdb
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/isdn_cdb ${CMAKE_CURRENT_BINARY_DIR}/mk_isdnhwdb
    COMMAND if [ -f ISDN.x86_64.txt ]\; then ln -sf ISDN.x86_64.txt ISDN.CDB.txt\; else ln -sf ISDN.ppc.txt ISDN.CDB.txt\; fi; && rm -f isdn_cdb.h && ${CMAKE_CURRENT_BINARY_DIR}/isdn_cdb ISDN.CDB.txt isdn_cdb.h && rm -f ISDN.CDB.hwdb && ${CMAKE_CURRENT_BINARY_DIR}/mk_isdnhwdb ISDN.CDB.txt ISDN.CDB.hwdb
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
