cmake_minimum_required(VERSION 3.16)
project(LogAnalyzer LANGUAGES CXX)

add_executable(LogAnalyzer src/main.cpp)
target_compile_features(LogAnalyzer PRIVATE cxx_std_20)
set_target_properties(LogAnalyzer PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
target_include_directories(LogAnalyzer PRIVATE src)
