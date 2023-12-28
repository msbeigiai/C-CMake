#find_package(Doxygen
#	REQUIRED dot)
#
#if(DOXYGEN_FOUND)
#	add_custom_target(
#		docs
#		${DOXYGEN_EXECUTABLE}
#		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
#		message("SOURCE DIRECTORY: ${CMAKE_SOURCE_DIR}")
#	)
#endif()
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)
if (DOXYGEN_FOUND)
	message("Doxygen build started")
	add_custom_target(docs ALL
        COMMAND ${DOXYGEN_EXECUTABLE}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)