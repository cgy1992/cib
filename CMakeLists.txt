project(cib)

cmake_minimum_required(VERSION 3.4)

include("../common/cmake/conf.cmake")

add_definitions(-DBOOST_AUTO_LINK_NOMANGLE)
add_subdirectory(${ROOT_DIR}/cppparser  ${CMAKE_OBJFILE_OUTPUT_DIRECTORY}/cppparser)

#############################################
## CIB

set(CIB_SOURCES
	cib.cpp
	cppprogex.cpp
	idmgr.cpp
	main.cpp
)

add_executable(cib ${CIB_SOURCES})
target_link_libraries(cib
	PRIVATE
		cppparser
		boost_filesystem
)

set(RESDIR ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/cibres)
set(RESFILES lib_cib.cpp lib_cib.h usr_cib.h)

foreach(RESFILE ${RESFILES})
	add_custom_command(
		TARGET cib
		POST_BUILD
			COMMAND echo Copying ${RESFILE}
			COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE} ${RESDIR}/${RESFILE}
	)
endforeach()

# Below lines are for making sure we also build
# test projects in proper order when cib is built.
add_subdirectory(test)
add_custom_target(cibtestshape)
add_dependencies(cibtestshape shape)
add_custom_target(cibtestdraw)
add_dependencies(cibtestdraw cibtestshape draw)