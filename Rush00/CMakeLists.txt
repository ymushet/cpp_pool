cmake_minimum_required(VERSION 3.8)
project(Rush00)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        #src/Bullet.cpp
        #src/Bullet.hpp
        src/Enemy.hpp
        src/game.cpp
        src/game.hpp
        src/Player.cpp
        src/Player.hpp
        main.cpp src/Enemy.cpp src/Dragon.cpp src/Dragon.hpp src/Ship.cpp src/Ship.hpp src/Meteor.cpp src/Meteor.hpp)

add_executable(Rush00 ${SOURCE_FILES})