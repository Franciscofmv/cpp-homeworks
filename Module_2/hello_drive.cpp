//*********************************************
// FILENAME: hello_drive.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 04/08/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: hello_drive.cpp; hello_interface.h; 
// PURPOSE: Ask user its name and print it to the screen.
//*********************************************

#include <iostream>
#include "hello_interface.h"

int main(){
    std::string name;
    name = get_name();
    print_name(name);
    return 0;
};
