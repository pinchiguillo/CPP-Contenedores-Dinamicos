cmake_minimum_required(VERSION 3.30)
project(CPP_Contenedores_Dinamicos)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)

# Incluye los directorios de Boost.
include_directories(${Boost_INCLUDE_DIRS})

add_executable(CPP_Contenedores_Dinamicos
        main.cpp
        ejercicio1/Ejercicio1.cpp
        ejercicio1/Ejercicio1.h
        ejercicio2/Ejercicio2.cpp
        ejercicio2/Ejercicio2.h
        ejercicio3/Ejercicio3.cpp
        ejercicio3/Ejercicio3.h
        ejercicio4/Ejercicio4.cpp
        ejercicio4/Ejercicio4.h
        ejercicio5/Ejercicio5.cpp
        ejercicio5/Ejercicio5.h
        ejercicio6/Ejercicio6.cpp
        ejercicio6/Ejercicio6.h
)
target_link_libraries(CPP_Contenedores_Dinamicos ${Boost_LIBRARIES})
