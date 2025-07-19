//*********************************************
// FILENAME: airplane.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/19/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: airplane.h, airplane.cpp, vehicle.h, vehicle.cpp, 
// PURPOSE: Interface for the class Airplane. Define constructors
//          and methods of the Airplane class. 
//*********************************************

#include <iostream>
#include "vehicle.h"

using std::string;

#ifndef AIRPLANE_H_
#define AIRPLANE_H_
class Airplane : public Vehicle{
    public:
            // Constructor:
        Airplane(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max);
            // Get transportation mode:
         string get_trans_mode();
            // Override print member function:
        void print();

};

#endif