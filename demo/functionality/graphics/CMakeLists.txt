project(graphics)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(GRAPHICS_PUB_FILE_NAMES
	circ.h
	composite.h
	context.h
	ellipse.h
	log_context.h
	rect.h
	shape.h
	point.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-proxy.h
)
set(GRAPHICS_PUB_FILES "")
foreach(PUBFILE ${GRAPHICS_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND GRAPHICS_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m Graphics -c ${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics-ids.h
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${GRAPHICS_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(GRAPHICS_SOURCES
	circ.cpp
	composite.cpp
	ellipse.cpp
	log_context.cpp
	rect.cpp
	point.cpp
)
add_library(graphics_cibified
	SHARED
		${GRAPHICS_SOURCES}
		${GRAPHICS_PUB_FILES}
		${CIB_OUTPUT}
)
target_include_directories(graphics_cibified
	PRIVATE
		pub
)
target_compile_definitions(graphics_cibified
	PRIVATE
		COMPILE_DEFINITIONS GRAPHICSAPI=
)
add_dependencies(graphics_cibified cib)

add_library(graphics
	SHARED
		${GRAPHICS_SOURCES}
		${GRAPHICS_PUB_FILES}
)
target_compile_definitions(graphics
	PRIVATE
		COMPILE_DEFINITIONS GRAPHICSAPI=${DLLEXPORT}
)
target_include_directories(graphics
	PUBLIC
		pub
)
if(MSVC)
    set_target_properties(graphics PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(graphics_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
