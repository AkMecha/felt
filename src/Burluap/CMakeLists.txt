set_source_files_properties(apply.c arithmetic.c array.c assignment.c burlap.c
          codegen.c coerce.c control.c debug.c descriptor.c error.c
          execute.c fefunc.c felt.c field.c function.c globals.c help.c
          interactive.c lexer.c literal.c location.c loop.c mathfunc.c
          matrixfunc.c miscfunc.c parser.c pathsearch.c predicate.c
          relational.c symbol.c trap.c vector.c write.c PROPERTIES LANGUAGE CXX )

add_executable( burlap 
          apply.c arithmetic.c array.c assignment.c burlap.c
          codegen.c coerce.c control.c debug.c descriptor.c error.c
          execute.c fefunc.c felt.c field.c function.c globals.c help.c
          interactive.c lexer.c literal.c location.c loop.c mathfunc.c
          matrixfunc.c miscfunc.c parser.c pathsearch.c predicate.c
          relational.c symbol.c trap.c vector.c write.c )

target_link_libraries(burlap felt elt readline)

install(TARGETS burlap DESTINATION bin)
