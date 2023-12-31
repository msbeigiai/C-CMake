cmake_minimum_required(VERSION 3.27)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_TESTING "Enable a unit testing build" ON)
option(ENABLE_DOCS "Enable a docs build" OFF)

option(ENABLE_WARNINGS "Enable a docs build" ON)
option(ENABLE_WARNINGS_AS_ERRORS "Enable a docs build" ON)

set(LIBRARY "Library")
set(EXECUTABLE "Executable")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

# ADD_GIT_SUBMODULE(external/json) 
#option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

include(FetchContent)
include(Docs)

if(ENABLED_WARNINGS) 
	include(Warnings)
endif()

FetchContent_Declare(
	nlohmann_json
	GIT_REPOSITORY https://github.com/nlohmann/json
	GIT_TAG v3.11.2
	GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(nlohmann_json) 

FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://github.com/fmtlib/fmt
	GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
	spdlog
	GIT_REPOSITORY https://github.com/gabime/spdlog
	GIT_TAG v1.11.0
	GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
	cxxopts
	GIT_REPOSITORY https://github.com/jarro2783/cxxopts
	GIT_TAG v3.0.0
	GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(cxxopts)

FetchContent_Declare(
	Catch2
	GIT_REPOSITORY https://github.com/catchorg/Catch2
	GIT_TAG v2.13.9
	GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Catch2)



add_subdirectory(app)
add_subdirectory(src)
add_subdirectory(configured)
add_subdirectory(external)
add_subdirectory(tests)


#if(COMPILE_EXECUTABLE)
#
#else()
#    message("W/o exe. compiling")
#endif()
