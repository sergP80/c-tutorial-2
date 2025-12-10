project("demo-heap-array")

include_directories(include)

file(GLOB src "src/*.c")

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${COMMON_DEPS})