cmake_minimum_required(VERSION 3.10)
project(Rasberrysoup VERSION 1.0.0 LANGUAGES CXX)

add_library(Rasberrysoup INTERFACE)
target_include_directories(Rasberrysoup INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

install(TARGETS Rasberrysoup EXPORT RasberrysoupConfig)
install(EXPORT RasberrysoupConfig
    NAMESPACE Rasberrysoup::
    DESTINATION share/Rasberrysoup
)
install(DIRECTORY include/Rasberrysoup DESTINATION include)

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/RasberrysoupConfig.cmake" "include(\"\${CMAKE_CURRENT_LIST_DIR}/RasberrysoupTargets.cmake\")\n")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/RasberrysoupConfig.cmake" DESTINATION share/Rasberrysoup)
