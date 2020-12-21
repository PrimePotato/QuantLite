file(GLOB_RECURSE SOURCES_CPP "*.cpp")
file(GLOB_RECURSE SOURCES_HDR "*.h")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
enable_testing()

message("!! TESTS !!")

add_executable(QUANT_LITE_TESTS ${SOURCES_CPP} ${SOURCES_HDR})

include_directories("../src")

target_link_libraries(QUANT_LITE_TESTS ${CONAN_LIBS} QUANT_MODELS)

