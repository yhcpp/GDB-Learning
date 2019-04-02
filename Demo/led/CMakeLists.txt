cmake_minimum_required(VERSION 3.5)

# Set the project name
project (led)



set(CMAKE_VERBOSE_MAKEFILE on)

#FIND_LIBRARY(SAMPLE_LIB sample /usr/lib)

LINK_DIRECTORIES(/usr/lib)

SET(LIBLED_SRC led.c) 

SET(LIBHEAD_FILE led.h) 

#SET(CMAKE_BUILD_TYPE Debug)

ADD_LIBRARY(led SHARED ${LIBLED_SRC})

TARGET_LINK_LIBRARIES(led sample)

INSTALL(TARGETS led DESTINATION "/usr/lib")

INSTALL(FILES ${LIBHEAD_FILE} DESTINATION "/usr/include")