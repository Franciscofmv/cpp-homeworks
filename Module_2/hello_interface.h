//*********************************************
// FILENAME: hello_interface
// PROGRAMMER: Francisco Moyet Vargas
// DATE:04/08/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: hello_interface.h, hello_interface.cpp
// PURPOSE: 
//      Define functions prototypes for 
//      asking and printing the user first name.
//*********************************************


#ifndef HELLO_INTERFACE_H_
#define HELLO_INTERFACE_H_

#include <iostream>
std::string get_name();
void print_name(std::string);

#endif