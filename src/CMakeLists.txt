file(GLOB_RECURSE SOURCES_CPP "*.cpp")
file(GLOB_RECURSE SOURCES_HDR "*.h")
project(QUANT_MODELS CXX)

message("-- QUANT_MODELS Sources: ${SOURCES_CPP} ${SOURCES_HDR}")
add_library(QUANT_MODELS ${SOURCES_CPP} ${SOURCES_HDR})

message("!!QUANT_MODELS !!")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
target_link_libraries(QUANT_MODELS PUBLIC ${CONAN_LIBS})
