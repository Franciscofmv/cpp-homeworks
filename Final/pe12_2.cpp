// FILENAME: pe12_2.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 08/04/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: string2.cpp, string2.h, pe12_2.cpp
// PURPOSE: Final: Test the enhancements of the String class. 

#include <iostream>
using namespace std;
#include "string2.h"
int main()
{
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2; // overloaded << operator
    cin >> s3; // overloaded >> operator
    s2 = "My name is " + s3; // overloaded =, + operators
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup(); // converts string to uppercase
    cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
    << " 'A' characters in it.\n";
    s1 = "red"; // String(const char *),
    // then String & operator=(const String&)
    String rgb[3] = { String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow(); // converts string to lowercase
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i]) // overloaded == operator
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again!\n";
    }
    cout << "Bye\n";
    return 0;
}