cmake_minimum_required(VERSION 3.27)
project(DSA_Project C)

set(CMAKE_C_STANDARD 17)

add_executable(DSA_Project main.c
        Record.c
        Record.h
        Element.c
        Element.h
        List.c
        List.h
        Table.c
        Table.h
        Node.c
        Node.h
        Interface.c
        Interface.h
        DataBase.c
        DataBase.h
        Tree.c
        Tree.h
)
