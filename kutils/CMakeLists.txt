include_directories( ${CMAKE_SOURCE_DIR}/smoke )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 

    COMMAND ${SMOKE_GEN_BIN}
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -L "${LIBRARY_OUTPUT_PATH}" -- ${CMAKE_CURRENT_SOURCE_DIR}/kutils_includes.h
    DEPENDS ${SMOKE_GEN_BIN} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

set(smokekutils_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${QT_INCLUDES} ${KDE4_INCLUDES} ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR} )

kde4_add_library(smokekutils SHARED ${smokekutils_LIB_SRCS})

# add_dependencies(smokekutils smokeqt)

target_link_libraries(smokekutils LINK_PRIVATE
    ${QT_QTCORE_LIBRARY}
    ${QT_QTXML_LIBRARY}
    ${QT_QTGUI_LIBRARY}
    ${KDE4_KDECORE_LIBS}
    ${KDE4_KDEUI_LIBS}
    ${KDE4_KEMOTICONS_LIBS}
    ${KDE4_KIDLETIME_LIBS}
    ${KDE4_KCMUTILS_LIBS}
    ${KDE4_KPRINTUTILS_LIBS}
    smokekdeui
    ${SMOKE_QTCORE_LIBRARY}
    ${SMOKE_BASE_LIBRARY}
)

set_target_properties(smokekutils PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokekutils DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../kutils_smoke.h DESTINATION include/smoke)
