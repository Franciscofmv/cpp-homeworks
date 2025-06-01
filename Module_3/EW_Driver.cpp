// FILENAME: EW_Driver.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 05/02/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: EnglishWeight.h, EnglishWeight.cpp
// PURPOSE: 
//          Define two EnglishWeight objects.
//          Test the overloaded operators (+, /, *, <<, >>) 
//          with the two objects.
#include <iostream>
#include "EnglishWeight.h"

int main(){
    
    EnglishWeight engWeight1;
    EnglishWeight engWeight2;
    EnglishWeight result;
    double number=0.0;

    std::cout << "\n\n...creating first EnglishWeight object...\n";
    std::cin >> engWeight1;

    std::cout << "\n\n...creating second EnglishWeight object...\n";
    std::cin >> engWeight2;

    std::cout << "\n\n...write a double type number...\n";
    std::cin >> number;

    std::cout << "\n...Results:\n";
    //EnglishWeight1 + EnglishWeight2
    result = engWeight1 + engWeight2;
    std::cout << "EnglishWeight1 + EnglishWeight2 = " << result << "\n\n";

    // EnglishWeight1 - EnglishWeight2
    result = engWeight1 - engWeight2;
    std::cout << "EnglishWeight1 - EnglishWeight2 = " << result << "\n\n";

    // EnglishWeight1 / EnglishWeight2:
    double  x = engWeight1 / engWeight2;
    std::cout << "EnglishWeight1 / EnglishWeight2 = " << x << "\n\n";

    // EnglishWeight1 * number
    result = engWeight1 * number;
    std::cout << "EnglishWeight1 * number = " << result << "\n\n";

    // number * EnglishWeight1
    result = number * engWeight1;
    std::cout << "number * EnglishWeight1 = " << result << "\n\n";

    // Englishweight1 / number
    result = engWeight1 / number;
    std::cout << "Englishweight1 / number = " << result << "\n\n"; 

    // Englishweight2 / number
    result = engWeight2 / number;
    std::cout << "Englishweight2 / number = "<< result << "\n\n";

    return 0;
}