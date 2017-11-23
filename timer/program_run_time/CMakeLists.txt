PROJECT(clocktest)
SET(SRC_LIST clocktest.c)
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
ADD_EXECUTABLE(clocktest ${SRC_LIST})
