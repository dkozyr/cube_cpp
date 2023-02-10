add_library(src)

file(GLOB_RECURSE H_SOURCES
    ./*.h
)

file(GLOB_RECURSE CPP_SOURCES
    ./*.cpp
)

target_sources(src
  PRIVATE
    ${CPP_SOURCES}
  PUBLIC
    ${H_SOURCES}
  )

target_include_directories(src
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

add_executable(
    graphics
    ${CPP_SOURCES}
    ${H_SOURCES}
    )

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(src
    PUBLIC
      "--coverage"
    )
  target_link_options(src
    INTERFACE
      "--coverage"
    )
endif()