set(EXE_SOURCES
	"main.cc")

add_executable(${EXECUTABLE} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE} PUBLIC 
	${LIBRARY}
	nlohmann_json)


if(${ENABLED_WARNINGS})
	TARGET_SET_WARNINGS(
		${EXECUTABLE} 
		${ENABLED_WARNINGS}
		${ENABLE_WARNINGS_AS_ERRORS})
endif()
