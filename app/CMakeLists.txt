set(EXE_SOURCES
	"main.cc")

add_executable(${EXECUTABLE} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE} PUBLIC 
	${LIBRARY}
	nlohmann_json)

