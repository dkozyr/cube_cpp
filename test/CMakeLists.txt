include(FetchContent)
FetchContent_Declare(gtest
  QUIET
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

file(GLOB_RECURSE TEST_SOURCES
    ./*.cpp
)


add_executable(
    tests
    ${TEST_SOURCES}
    )

target_link_libraries(
  tests
  PRIVATE
    src
    gtest_main
  )

include(GoogleTest)
gtest_discover_tests(tests
  PROPERTIES
    LABELS "unit"
  DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )