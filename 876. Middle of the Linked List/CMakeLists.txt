set(PROPLEM_NAME 876)

add_executable(${PROPLEM_NAME} main.cc Solution.h)

target_link_libraries(${PROPLEM_NAME} PUBLIC utils)
