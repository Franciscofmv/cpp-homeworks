//*********************************************
// FILENAME: boat.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/19/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: boat.h, boat.cpp, vehicle.h, vehicle.cpp, 
// PURPOSE: Interface for the class Boat. Define constructors
//          and methods of the Boat class. 
//*********************************************
#include <iostream>
#include "vehicle.h"

using std::string;

#ifndef BOAT_H_
#define BOAT_H_
class Boat : public Vehicle{
    public:
            // Constructor:
        Boat(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max);
            // Get transportation mode:
         string get_trans_mode();

};

#endif