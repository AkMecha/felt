flex_target(CorduroyLexer lexer.l lexer.c COMPILE_FLAGS "-i -Pcord_yy")
bison_target(CorduroyParser parser.y parser.cpp COMPILE_FLAGS "-d -y -pcord_yy")

add_executable(corduroy
  corduroy.cpp debug.cpp error.cpp generator.cpp
  ${FLEX_CorduroyLexer_OUTPUTS} ${BISON_CorduroyParser_OUTPUTS})

file(COPY lexer.c geninput.h parser.hpp parser.cpp generator.h
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(corduroy gen felt elt mtx)

install(TARGETS corduroy DESTINATION bin)
