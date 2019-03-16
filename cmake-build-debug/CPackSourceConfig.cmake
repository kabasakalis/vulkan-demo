# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_ARCHIVE_COMPONENT_INSTALL "ON")
set(CPACK_BINARY_7Z "")
set(CPACK_BINARY_BUNDLE "")
set(CPACK_BINARY_CYGWIN "")
set(CPACK_BINARY_DEB "")
set(CPACK_BINARY_DRAGNDROP "")
set(CPACK_BINARY_FREEBSD "")
set(CPACK_BINARY_IFW "")
set(CPACK_BINARY_NSIS "")
set(CPACK_BINARY_NUGET "")
set(CPACK_BINARY_OSXX11 "")
set(CPACK_BINARY_PACKAGEMAKER "")
set(CPACK_BINARY_PRODUCTBUILD "")
set(CPACK_BINARY_RPM "")
set(CPACK_BINARY_STGZ "")
set(CPACK_BINARY_TBZ2 "")
set(CPACK_BINARY_TGZ "")
set(CPACK_BINARY_TXZ "")
set(CPACK_BINARY_TZ "")
set(CPACK_BINARY_WIX "")
set(CPACK_BINARY_ZIP "")
set(CPACK_BUILD_SOURCE_DIRS "F:/cpp/vulkan-demo;F:/cpp/vulkan-demo/cmake-build-debug")
set(CPACK_CMAKE_GENERATOR "NMake Makefiles")
set(CPACK_COMMAND "F:/Programs/clion/bin/cmake/win/bin/cpack")
set(CPACK_COMPONENTS_ALL "runtime;dev")
set(CPACK_COMPONENTS_ALL_SET_BY_USER "TRUE")
set(CPACK_COMPONENT_DEV_DEPENDS "runtime")
set(CPACK_COMPONENT_DEV_DESCRIPTION "Development files for template library")
set(CPACK_COMPONENT_DEV_DISPLAY_NAME "C/C++ development files")
set(CPACK_COMPONENT_INCLUDE_TOPLEVEL_DIRECTORY "OFF")
set(CPACK_COMPONENT_RUNTIME_DESCRIPTION "Runtime components for template library")
set(CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "template library")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "all")
set(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA "")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "CMake Project Template")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "opensource@cginternals.com")
set(CPACK_DEBIAN_PACKAGE_NAME "template")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_VERSION "2.0.0")
set(CPACK_DEB_COMPONENT_INSTALL "ON")
set(CPACK_GENERATOR "7Z;ZIP")
set(CPACK_IGNORE_FILES "")
set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY "OFF")
set(CPACK_INSTALLED_DIRECTORIES "")
set(CPACK_INSTALL_CMAKE_PROJECTS "")
set(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/template")
set(CPACK_MODULE_PATH "F:/cpp/vulkan-demo/deploy/packages/template")
set(CPACK_NSIS_DISPLAY_NAME "template")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "template")
set(CPACK_OUTPUT_CONFIG_FILE "F:/cpp/vulkan-demo/cmake-build-debug/CPackConfig-template.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "F:/cpp/vulkan-demo/README.md")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "CMake Project Template")
set(CPACK_PACKAGE_FILE_NAME "")
set(CPACK_PACKAGE_ICON "F:\\cpp\\vulkan-demo\\cmake-init-logo.png")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "template")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "template")
set(CPACK_PACKAGE_NAME "template")
set(CPACK_PACKAGE_RELOCATABLE "false")
set(CPACK_PACKAGE_VENDOR "CG Internals GmbH")
set(CPACK_PACKAGE_VERSION "2.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "2")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGING_INSTALL_PREFIX "")
set(CPACK_PATH "F:/Programs/clion/bin/cmake/win/bin")
set(CPACK_RESOURCE_FILE_LICENSE "F:/cpp/vulkan-demo/LICENSE")
set(CPACK_RESOURCE_FILE_README "F:/cpp/vulkan-demo/README.md")
set(CPACK_RESOURCE_FILE_WELCOME "F:/cpp/vulkan-demo/README.md")
set(CPACK_RPM_COMPONENT_INSTALL "ON")
set(CPACK_RPM_PACKAGE_ARCHITECTURE "x86_64")
set(CPACK_RPM_PACKAGE_DESCRIPTION "")
set(CPACK_RPM_PACKAGE_GROUP "unknown")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RPM_PACKAGE_NAME "template")
set(CPACK_RPM_PACKAGE_PROVIDES "")
set(CPACK_RPM_PACKAGE_RELEASE "1")
set(CPACK_RPM_PACKAGE_RELOCATABLE "OFF")
set(CPACK_RPM_PACKAGE_REQUIRES "")
set(CPACK_RPM_PACKAGE_SOURCES "ON")
set(CPACK_RPM_PACKAGE_SUMMARY "CMake Project Template")
set(CPACK_RPM_PACKAGE_VENDOR "CG Internals GmbH")
set(CPACK_RPM_PACKAGE_VERSION "2.0.0")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_CYGWIN "")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_IGNORE_FILES "")
set(CPACK_SOURCE_INSTALLED_DIRECTORIES "")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "F:/cpp/vulkan-demo/cmake-build-debug/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "")
set(CPACK_SOURCE_RPM "")
set(CPACK_SOURCE_TBZ2 "")
set(CPACK_SOURCE_TGZ "")
set(CPACK_SOURCE_TOPLEVEL_TAG "")
set(CPACK_SOURCE_TXZ "")
set(CPACK_SOURCE_TZ "")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "win32")
set(CPACK_TOPLEVEL_TAG "")
set(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "F:/cpp/vulkan-demo/cmake-build-debug/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
