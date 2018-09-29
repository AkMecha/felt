configure_file( ${PROJECT_SOURCE_DIR}/include/config.h.in ${PROJECT_SOURCE_DIR}/include/config.h)

include_directories( ${PROJECT_SOURCE_DIR}/include)

file(COPY lexer.c parser.hpp parser.cpp
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

flex_target(FeltLexer lexer.l lexer.c COMPILE_FLAGS "-i -Pfelt_yy")
bison_target(FeltParser parser.y parser.cpp COMPILE_FLAGS "-d -y -pfelt_yy")

#SET(EXTRA_LINK_FLAGS  "-fPIC")
#SET(CMAKE_SHARED_LINKER_FLAGS  "${CMAKE_SHARED_LINKER_FLAGS} ${EXTRA_LINK_FLAGS}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static" )

add_library(felt
         code.cpp definition.cpp detail.cpp draw.cpp
         fe.cpp file.cpp initialize.cpp ${FLEX_FeltLexer_OUTPUTS} modal.cpp
         nonlinear.cpp objects.cpp ${BISON_FeltParser_OUTPUTS} problem.cpp
         renumber.cpp results.cpp rosenbrock.cpp spectral.cpp transient.cpp)

