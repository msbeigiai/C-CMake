set(LIBRARY_SOURCES
	"my_lib.cc")

set(LIBRARY_HEADERS
	"my_lib.h")

set(LIBRARY_INCLUDES
	"./"
	"${CMAKE_BINARY_DIR}/configured_files/include")

add_library(${LIBRARY} STATIC 
	${LIBRARY_SOURCES}
	${LIBRARY_HEADERS})
target_include_directories(${LIBRARY} PUBLIC 
	${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY} PUBLIC
	nlohmann_json::nlohmann_json
	#fmt::fmt
	spdlog::spdlog
	cxxopts::cxxopts)

if(${ENABLED_WARNINGS})
	TARGET_SET_WARNINGS(
		${LIBRARY} 
		${ENABLED_WARNINGS}
		${ENABLE_WARNINGS_AS_ERRORS})
endif()
