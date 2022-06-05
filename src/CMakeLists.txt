add_subdirectory(piece)

add_executable(chess main.cpp)

target_link_libraries(chess piece)