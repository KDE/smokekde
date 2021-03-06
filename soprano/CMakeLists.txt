set(soprano_includes ${SOPRANO_INCLUDE_DIR})

include_directories( ${QT_INCLUDES} ${SOPRANO_INCLUDE_DIR} )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp

    COMMAND ${SMOKE_GEN_BIN}
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -I "${SOPRANO_INCLUDE_DIR}" -L "${LIBRARY_OUTPUT_PATH}" -- ${CMAKE_CURRENT_SOURCE_DIR}/soprano_includes.h
    DEPENDS ${SMOKE_GEN_BIN} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/soprano )

set(smokesoprano_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
	${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokesoprano SHARED ${smokesoprano_LIB_SRCS})

target_link_libraries(smokesoprano LINK_PRIVATE
   ${SMOKE_QTCORE_LIBRARY} ${QT_QTCORE_LIBRARY} ${SOPRANO_LIBRARIES} ${SMOKE_BASE_LIBRARY})

set_target_properties(smokesoprano PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokesoprano DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../soprano_smoke.h DESTINATION include/smoke)
