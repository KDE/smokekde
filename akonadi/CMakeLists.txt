FIND_PACKAGE(Akonadi REQUIRED)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${CMAKE_SOURCE_DIR}/smoke )

set(srcdir ${CMAKE_CURRENT_SOURCE_DIR})
set(KDE_PREFIX ${CMAKE_INSTALL_PREFIX})
set(qt_includes ${QT_INCLUDE_DIR})
set(kde_includes ${KDE4_INCLUDE_DIR})
set(akonadi_includes ${AKONADI_INCLUDE_DIR})
if(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "yes")
else(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "no")
endif(OPENGL_FOUND AND OPENGL_GLU_FOUND)	

set(qtflags "-lQtCore -lQtGui")
FOREACH(filename ${QT_INCLUDES})
    set(all_includes "-I${filename} ${all_includes}")
ENDFOREACH(filename)

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY )

########### next target ###############

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
                ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp


                  COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )


set(smokeakonadi_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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
                ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp
)

# Needed to make QSqlRelationalDelegate compile
ADD_DEFINITIONS (-DQT_GUI_LIB)

include_directories( ${AKONADI_INCLUDE_DIR}/akonadi )

kde4_add_library(smokeakonadi SHARED ${smokeakonadi_LIB_SRCS})

target_link_libraries(smokeakonadi 
    akonadi-kde
    akonadi-kmime
    smokekde
    smokeqt )

set_target_properties(smokeakonadi PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokeakonadi DESTINATION ${LIB_INSTALL_DIR} )
install(FILES akonadi_smoke.h DESTINATION include/smoke/akonadi )

########### install files ###############



