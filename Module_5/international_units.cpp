// FILENAME: international_units.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 06/18/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED:  international_units.h
// PURPOSE:
//          Define the implementation of the member functions
//          of the InternationalUnits class

#include "international_units.h"

    // Define Constructors:
InternationalUnits::InternationalUnits(){
    kilometers = 0;
    meters = 0.0;
}
InternationalUnits::InternationalUnits(int& km, double& m){
    kilometers = km;
    meters = m;
}

