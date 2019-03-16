#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Vulkan Demo::fiblib" for configuration "Debug"
set_property(TARGET Vulkan Demo::fiblib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Vulkan Demo::fiblib PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/fiblibd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/./fiblibd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Vulkan Demo::fiblib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Vulkan Demo::fiblib "${_IMPORT_PREFIX}/lib/fiblibd.lib" "${_IMPORT_PREFIX}/./fiblibd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
