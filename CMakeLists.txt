cmake_minimum_required(VERSION 3.10)
project(swanstation C CXX)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.cmake" CACHE PATH "toolchain file")
include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)

SET(CMAKE_SYSTEM_NAME Vita)
SET(CMAKE_SYSTEM_PROCESSOR armv7l)
# SET(CMAKE_C_COMPILER arm-vita-eabi-gcc)
SET(CMAKE_CXX_COMPILER arm-vita-eabi-c++)
SET(CMAKE_C_LINK_EXECUTABLE arm-vita-eabi-ld)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("CMake Version: ${CMAKE_VERSION}")
message("CMake System Name: ${CMAKE_SYSTEM_NAME}")
message("$ENV{VITASDK}/share/vita.cmake")


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu11 -fpermissive")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fpermissive")

# Pull in modules.
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules/")

set(USE_EGL OFF)
set(USE_X11 OFF)
set(USE_WAYLAND OFF)
set(USE_D3D12 OFF)
set(USE_DRMKMS OFF)
set(USE_FBDEV OFF)
set(USE_EVDEV OFF)

# Force PIC when compiling a libretro core.
set(CMAKE_POSITION_INDEPENDENT_CODE ON)


# Set _DEBUG macro for Debug builds.
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")


set(CPU_ARCH "armv7l")


# # Write binaries to a seperate directory.
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

# # Needed for Linux - put shared libraries in the binary directory.
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


find_package(Threads REQUIRED)

enable_testing()
add_subdirectory(dep)
add_subdirectory(src)

# vita_create_self(${PROJECT_NAME}.self ${PROJECT_NAME})