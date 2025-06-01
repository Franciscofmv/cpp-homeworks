//*********************************************
// FILENAME: hello_interface.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 04/08/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: hello_interface.cpp
// PURPOSE: 
//  Contains the implementation of functions used in the code:
//      - function 1: prompts the user for their first name and returns the name back to main().
//      - function 2: user's first name is the argument; displays name on the screen
//*********************************************

#include <iostream>
#include "hello_interface.h"

std::string get_name(){
    std::string name;
    std::cout << "Please, write your first name below:\n" << std::endl;
    std::cin >> name;
    return name;
};

void print_name(std::string name){
    std::cout << name << std::endl;
};