project("lab01_4")

include_directories(include)

file(GLOB SRC "src/*.c")

add_executable (${PROJECT_NAME} ${SRC} ${COMMON_DEPS})