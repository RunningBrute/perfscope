cmake_minimum_required(VERSION 3.16)
project(PerfScope)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Benchmark options
set(BENCHMARK_ENABLE_TESTING OFF)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF)

add_subdirectory(external/benchmark)

add_executable(benchmarks
    benchmarks/main.cpp
)

target_link_libraries(benchmarks
    benchmark
)
