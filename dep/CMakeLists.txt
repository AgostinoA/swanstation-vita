add_subdirectory(glad)
add_subdirectory(stb)
add_subdirectory(zlib)
add_subdirectory(minizip)
add_subdirectory(lzma)
add_subdirectory(libFLAC)
add_subdirectory(libchdr)
add_subdirectory(xxhash)
add_subdirectory(rapidjson)
add_subdirectory(glslang)
add_subdirectory(vulkan-loader)
add_subdirectory(simpleini)
add_subdirectory(libretro-common)

set(LIBSAMPLERATE_ENABLE_SINC_BEST_CONVERTER OFF)
add_subdirectory(libsamplerate)

if(${CPU_ARCH} STREQUAL "aarch32" OR ${CPU_ARCH} STREQUAL "aarch64")
  add_subdirectory(vixl)
endif()

