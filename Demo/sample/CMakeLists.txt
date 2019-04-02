cmake_minimum_required(VERSION 3.5)

# Set the project name
project (sample)




SET(LIBSAMPLE_SRC sample.c)
SET(LIBHEAD_FILE sample.h)
#SET(CMAKE_BUILD_TYPE Debug)

ADD_LIBRARY(sample SHARED ${LIBSAMPLE_SRC})

INSTALL(TARGETS sample DESTINATION "/usr/lib")

INSTALL(FILES ${LIBHEAD_FILE} DESTINATION "/usr/include")
