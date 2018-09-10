add_executable( burluap 
          apply.c arithmetic.c array.c assignment.c burlap.c
          codegen.c coerce.c control.c debug.c descriptor.c error.c
          execute.c fefunc.c felt.c field.c function.c globals.c help.c
          interactive.c lexer.c literal.c location.c loop.c mathfunc.c
          matrixfunc.c miscfunc.c parser.c pathsearch.c predicate.c
          relational.c symbol.c trap.c vector.c write.c )

include_directories(${LUA_INCLUDE_DIR})

add_library(lfelt STATIC lfelt.cpp)
set_target_properties(lfelt PROPERTIES PREFIX "" OUTPUT_NAME felt)

target_link_libraries(burluap felt elt readline)

target_link_libraries(lfelt felt elt mtx readline)

install(TARGETS burluap DESTINATION bin)
