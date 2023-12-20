cmake_minimum_required(VERSION 3.8)
project(learn_03)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(limits src/limits.cpp)
add_executable(exceed src/exceed.cpp)

set(CMAKE_INSTALL_PREFIX /home/xys/learning_cpp_from_zero/learning_cpp_from_zero/learn_03/install)

target_include_directories(limits PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_features(limits PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS
    limits 
    exceed
    DESTINATION lib/${PROJECT_NAME})