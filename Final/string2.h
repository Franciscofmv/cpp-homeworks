
// FILENAME: string2.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 08/04/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: string2.cpp, string2.h
// PURPOSE: Final: Enhance the String class declaration 
//          (that is, upgrading string1.h to string2.h) by
//          Overloading + operator, providing a has(char), 
//          stringup() and stringdown() method.

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;
class String{
    private:
        char * str; // pointer to string
        int len; // length of string
        static int num_strings; // number of objects
        static const int CINLIM = 80; // cin input limit
    public:
            // constructors and other methods
        String(const char * s); // constructor
        String(); // default constructor
        String(const String &); // copy constructor
        ~String(); // destructor
        int length () const { return len; }
        void stringup();
        void stringlow();
        int has(char x);
        
            // overloaded operator methods
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        String  operator+(String& x);
        friend String operator+(const char* x, String& rhs);
        const char & operator[](int i) const;

            // overloaded operator friends
        friend bool operator<(const String &st, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);

            // static function
        static int HowMany();

};
#endif