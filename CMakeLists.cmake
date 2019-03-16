add_executable(vulkaninfo vulkaninfo.c)
target_compile_definitions(vulkaninfo PRIVATE VK_USE_PLATFORM_WIN32_KHR)
target_link_libraries(vulkaninfo Vulkan::Vulkan)



# CMakeList.txt : CMake project for vulkanDemo, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

# Meta information about the project #### [ADAPT]
set(META_PROJECT_NAME        "Vulkan Demo")
set(META_PROJECT_DESCRIPTION "Testing Vulkan")
set(META_AUTHOR_ORGANIZATION "Spiros Kabasakalis")
set(META_AUTHOR_DOMAIN       "https://github.com/kabaskalis/vulkan-demo/")
set(META_AUTHOR_MAINTAINER   "kabasakalis@gmail.com")
set(META_VERSION_MAJOR       "0")
set(META_VERSION_MINOR       "1")
set(META_VERSION_PATCH       "0")
set(META_VERSION_REVISION    "${GIT_REV}")
set(META_VERSION             "${META_VERSION_MAJOR}.${META_VERSION_MINOR}.${META_VERSION_PATCH}")
set(META_NAME_VERSION        "${META_PROJECT_NAME} v${META_VERSION} (${META_VERSION_REVISION})")
set(META_CMAKE_INIT_SHA      "${GIT_SHA1}")


find_package(Vulkan REQUIRED)


# Add source to this project's executable.
add_executable(vulkanDemo "vulkanDemo.cpp" "vulkanDemo.h")


# TODO: Add tests and install targets if needed.
# Project Info
project(VulkanSeed)
enable_language(C)
enable_language(CXX)

# CMake Settings
set(CMAKE_SUPPRESS_REGENERATION true)

# Dependencies
find_path(VULKAN_INCLUDE_DIR NAMES vulkan/vulkan.h HINTS
        "$ENV{VULKAN_SDK}/Include"
        "$ENV{VK_SDK_PATH}/Include")


if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    find_library(VULKAN_LIBRARY NAMES vulkan-1 HINTS
            "$ENV{VULKAN_SDK}/Lib"
            "$ENV{VULKAN_SDK}/Bin"
            "$ENV{VK_SDK_PATH}/Bin")
else ()
    find_library(VULKAN_LIBRARY NAMES vulkan-1 HINTS
            "$ENV{VULKAN_SDK}/Lib32"
            "$ENV{VULKAN_SDK}/Bin32"
            "$ENV{VK_SDK_PATH}/Bin32")
endif ()


include_directories(${VULKAN_INCLUDE_DIR})
#add_subdirectory(external/Vulkan-WSIWindow/WSIWindow)
#include_directories(external/glm)

# Sources
include_directories(
        ${PROJECT_SOURCE_DIR}/src
)

add_executable(
        ${PROJECT_NAME}
        VulkanDemo.cpp
)

# Finish Dependencies
target_link_libraries(
        ${PROJECT_NAME}
        ${VULKAN_LIBRARY}
        WSIWindow
)