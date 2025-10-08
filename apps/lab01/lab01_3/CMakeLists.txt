project("lab01_3")

include_directories(include)

file(GLOB SRC "src/*.c")

add_executable (${PROJECT_NAME} ${SRC} ${COMMON_DEPS})