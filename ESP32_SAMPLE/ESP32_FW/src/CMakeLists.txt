# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

#FILE(GLOB_RECURSE app_sources ${CMAKE_SOURCE_DIR}/src/*.*)

file(GLOB SRC_FILES 
  bsp/*.c
  hw/*.c
  hw/hal/*.c
)

file(GLOB_RECURSE SRC_FILES_RECURSE
  app/*.c
  common/*.c 
)

idf_component_register(

    SRCS "main.c"
    SRCS ${SRC_FILES}
    SRCS ${SRC_FILES_RECURSE}



    INCLUDE_DIRS ""
    INCLUDE_DIRS "app"
    INCLUDE_DIRS "bsp"
    INCLUDE_DIRS "common"
    INCLUDE_DIRS "hw"
    INCLUDE_DIRS "hw/hal"
)
