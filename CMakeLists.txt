cmake_minimum_required(VERSION 3.10)
project(MotionProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML
find_package(SFML 2.5.1 REQUIRED COMPONENTS graphics window system audio)
include_directories(${SFML_INCLUDE_DIR})

# Add all source files
set(SOURCES
    main.cpp
    controller.cpp
    motion.cpp
    menu.cpp
    player.cpp
    view.cpp
)

set(HEADERS
    controller.hpp
    motion.hpp
    menu.hpp
    player.hpp
    view.hpp
)

# Create executable
add_executable(motion ${SOURCES} ${HEADERS})

# CMakeLists.txt
# add_custom_command(TARGET game POST_BUILD
    # COMMAND ${CMAKE_COMMAND} -E copy_directory
        # ${CMAKE_SOURCE_DIR}/textures
        # $<TARGET_FILE_DIR:game>/textures
# )

# Link SFML libraries
target_link_libraries(motion PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)
