cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)
find_package(Curses REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(client client.cpp Console.cpp)

target_link_libraries(client ${CMAKE_THREAD_LIBS_INIT} ${CURSES_LIBRARIES} protocol socket)

install(TARGETS client DESTINATION ${PROJECT_SOURCE_DIR}/bin)