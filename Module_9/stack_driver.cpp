// FILENAME: stack_driver.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/26/25
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: stack_driver.cpp, dblstk.h, dblstk.cpp
// PURPOSE:
//          Create two UserStacks (LIFO) objects.
//          Allow the user to perform multiple operations on the defined stacks.
//          Learn how to use a template class. 


#include <iostream>
#include "dblstk.h"


int main(){
    UserStack<int> stack_1(10);
    UserStack<int> stack_2(10);

    // Creating user menu:
    int option = 0;
    std::cout << "\n";
    while(true){
        std::cout << "******* Menu *******\n";
        std::cout << "1. Display stack 1\n";
        std::cout << "2. Place a integer value onto the top of stack 1\n";
        std::cout << "3. Remove a value from the top of stack 1\n";
        std::cout << "4. Check the total capacity stack 1\n";
        std::cout << "5.  Check current number of items on stack 1\n";
        std::cout << "6. Copy stack 1 to stack 2\n";
        std::cout << "7. Check to see if the two stacks are equal\n";
        std::cout << "8. Quit\n";
        std::cout << "Select an option: ";
        if (std::cin >> option){}
        else{
            std::cout << "\n****\n";
            std::cout << "Wrong data entered. Please enter a valid option.";
            std::cout << "\n****\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') ;
            continue;
        }
        if (option == 1){
            stack_1.display();
        }
        else if(option == 2){
            int new_int=0.0;
            std::cout << "\n****\n";
            std::cout << "Enter a number: ";
            if (std::cin >> new_int){
            stack_1.push(new_int);
            std::cout << "\n****\n\n";
            }
            else{
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') ;
            std::cout << "\n****\n";
            std::cout << "Wrong data entered. Please enter a valid option.";
            std::cout << "\n****\n\n";
            continue;
            }
        }
        else if (option == 3){
            int pop_d=0.0;
            std::cout << "\n****\n";
            if (stack_1.size()){
                stack_1.pop(pop_d);
                std::cout << "The value "<< pop_d <<" was removed.";}
            else{
                std::cout << "Stack is empty";}
            std::cout << "\n****\n\n";
        }
        else if (option == 4){
            std::cout << "\n****\n";
            std::cout << "Capacity of stack 1: "<<stack_1.capacity();
            std::cout << "\n****\n\n";
        }
        else if (option == 5){
            std::cout << "\n****\n";
            std::cout << "Number of items in stack 1: "<<stack_1.size();
            std::cout << "\n****\n\n";
        }
        else if (option == 6){
            std::cout << "\n****\n";
            stack_2 = stack_1;
            std::cout << "Copying stack 1 to stack 2.\n";
            std::cout << "Done.";
            std::cout << "\n****\n\n";  
        }
        else if (option == 7){
            std::cout << (stack_1 == stack_2);
            if (stack_1 == stack_2){
            std::cout << "\n****\n";
            std::cout << "stack 1 is equal to stack 2";
            std::cout << "\n****\n\n";
            }else{
            std::cout << "\n****\n";
            std::cout << "stack 1 is not equal to stack 2";
            std::cout << "\n****\n\n";  
            }
        }
        else if (option == 8){
            
            std::cout << "Exiting Program.\n";
            std::exit(0);
        }
        
    }

    return 0;
}