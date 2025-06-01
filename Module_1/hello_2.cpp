//*********************************************
// FILENAME:   hello_2.cpp 
// PROGRAMMER: Francisco Moyet Vargas
// DATE:       03/26/2025
// COMPILER:   Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED:   hello_2.cpp
// PURPOSE:
//    Asks the user name.
//    Display user name to the terminal.
//*********************************************


#include <iostream>   

int main( void )
{   
    char name[100];
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    std::cout  << name << std::endl;
	
    return 0;
}