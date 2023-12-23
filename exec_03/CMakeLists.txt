cmake_minimum_required(VERSION 3.8)
project(exec_03)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


add_executable(ex01 src/ex01.cpp)

set(CMAKE_INSTALL_PREFIX /home/xys/learning_cpp_from_zero/learning_cpp_from_zero/exec_03/install)


target_include_directories(ex01 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)


target_compile_features(ex01 PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS
    ex01
    DESTINATION lib/${PROJECT_NAME})
