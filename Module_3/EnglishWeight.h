// FILENAME: EnglishWeight.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 05/02/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: EnglishWeight.cpp, EnglishWeight.h
// PURPOSE:
//          Create a class called EnglishWeight with pounds and ounces attributes.
//          Create appropiate constructors.
//          Overload operators +, -, /, *, <<, and >>.

#ifndef ENGLISHWEIGHT_H_
#define ENGLISHWEIGHT_H_

#include <iostream>

class EnglishWeight{
    private:
        int pounds;
        double ounces;

    public:
        // Constructors
        EnglishWeight();
        EnglishWeight(int lb);
        EnglishWeight(double oz);
        EnglishWeight(int lb, double oz);

        // Overload istream and ostream
        friend std::ostream& operator << (std::ostream &str, EnglishWeight &rhs);
        friend std::istream& operator >> (std::istream& str, EnglishWeight &rhs);

        // Overload operators +, -, /, and *
        EnglishWeight operator +(EnglishWeight & rhs) const;
        EnglishWeight operator -(EnglishWeight & rhs) const;
        double operator /(EnglishWeight &rhs) const;
        EnglishWeight operator/(int number) const;
        EnglishWeight operator/(double number) const;
        EnglishWeight operator *(double &x) const;
        friend EnglishWeight operator *(double x, EnglishWeight &obj);
};
#endif