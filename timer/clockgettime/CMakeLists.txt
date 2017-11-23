PROJECT(clockgettime)
SET(SRC_LIST clockgettime.c)
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
ADD_EXECUTABLE(clockgettime ${SRC_LIST})
