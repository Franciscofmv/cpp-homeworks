
// FILENAME: string2.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 08/04/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: string2.cpp, string2.h
// PURPOSE: Final: Enhance the String class declaration 
//          (that is, upgrading string1.h to string2.h) by
//          Overloading + operator, providing a has(char), 
//          stringup() and stringdown() method.
#include <cctype>
#include <cstring> // string.h for some
#include "string2.h"

using std::cin;
using std::cout;

// initializing static class member
int String::num_strings = 0;

    // static method
int String::HowMany()
{   
    return num_strings;
}
    // class methods
String::String(const char * s) // construct String from C string
{
    len = std::strlen(s); // set size
    str = new char[len + 1]; // allot storage
    std::strcpy(str, s); // initialize pointer
    num_strings++; // set object count
}
String::String() // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0'; // default string
    num_strings++;
}
String::String(const String & st)
{
    num_strings++; // handle static member update
    len = st.len; // same length
    str = new char [len + 1]; // allot space
    std::strcpy(str, st.str); // copy string to new location
}
String::~String() // necessary destructor
{
    --num_strings; // required
    delete [] str; // required
}
// overloaded operator methods
// assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;

    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}
    // Concatenator function:
String String::operator+(String& x){
    int m = this->len;
    int n = x.len;
    char * str_temp = new char[n + m + 1];
    std::strcpy(str_temp, this->str);
    std::strcat(str_temp, x.str);
    String result(str_temp);
    delete [] str_temp;
    return result;
}
    // Concatenator Text Function:
String operator+(const char* x, String& rhs){
    int m = std::strlen(x); // set size
    int n = rhs.len;
    char *temp_char = new char[m + n +1];
    std::strcpy(temp_char, x);
    std::strcat(temp_char, rhs.str);
    String result(temp_char);
    
    delete [] temp_char;
    return result;
};
// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}
// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}
    // read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}
    // overloaded operator friends
bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}   
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}
// simple String output
ostream & operator<<(ostream & os, const String & st)
{
os << st.str;
return os;
}
// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
    // Upper case:
void String::stringup(){
    int n = this->len;
    char *temp_arr = new char[n];
    strcpy(temp_arr, this->str);
    for(int i=0; i<n; ++i){
        temp_arr[i] = toupper(this->str[i]);
    }

    *this = String(temp_arr);
    delete [] temp_arr;
}
    //Lower Case:
void String::stringlow(){
    int n = this->len;
    char *temp_arr = new char[n];
    strcpy(temp_arr, this->str);
    for(int i=0; i<n; ++i){
        temp_arr[i] = tolower(this->str[i]);
    }

    *this = String(temp_arr);
    delete [] temp_arr;
}
    // Count how many times character input repeats:
int String::has(char x){
    int counter = 0;
    int n = this->len;
    for(int i=0; i<n; ++i){
        if (this->str[i] == x)
            counter += 1;
    }
    return counter;
}