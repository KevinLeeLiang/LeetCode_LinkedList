cmake_minimum_required(VERSION 3.17)
project(LinkedList)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(LinkedList main.cpp L2_addTwoNumbers/L2_addTwoNumbers.cpp L2_addTwoNumbers/L2_addTwoNumbers.h L19_removeNthFromEnd/L19_removeNthFromEnd.cpp L19_removeNthFromEnd/L19_removeNthFromEnd.h test_factory.h util/util.h L21_mergeTwoLists/L21_mergeTwoLists.cpp L21_mergeTwoLists/L21_mergeTwoLists.h L23_mergeKLists/L23_mergeKLists.cpp L23_mergeKLists/L23_mergeKLists.h)