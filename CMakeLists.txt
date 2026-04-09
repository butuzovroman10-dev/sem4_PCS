cmake_minimum_required(VERSION 3.10)
project(it_company)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(it_company
    main.cpp
    Company.cpp
    polymorphic_utils.cpp
    IWorkable.h
    Employee.h
    Developer.h
    Manager.h
    Tester.h
    polymorphic_utils.h
)

target_include_directories(it_company PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})