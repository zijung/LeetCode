cmake_minimum_required(VERSION 3.14)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

add_library(utils STATIC utils.cc)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory("19. Remove Nth Node From End of List")
add_subdirectory("20. Valid Parentheses")
add_subdirectory("21. Merge Two Sorted Lists")
add_subdirectory("69. Sqrt(x)")
add_subdirectory("92. Reverse Linked List II")
add_subdirectory("141. Linked List Cycle")
add_subdirectory("155. Min Stack")
add_subdirectory("206. Reverse Linked List")
add_subdirectory("215. Kth Largest Element in an Array")
add_subdirectory("234. Palindrome Linked List")
add_subdirectory("876. Middle of the Linked List")
