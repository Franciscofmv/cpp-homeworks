//*********************************************
// FILENAME: vehicle.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/19/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: vehicle.h, vehicle.cpp
// PURPOSE: Interface for the ADT class Vechicle.
//          This class will serve as Base class
//          for all other classes in this module.
//*********************************************
#include <iostream>

using std::string;

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle{
    public:
            // Constructor:
        Vehicle(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max);
            // Get transportation mode (i.e. water, land, air...)
        virtual string get_trans_mode() = 0;
            //Get attributes:
        virtual string get_id_info();
        virtual double get_empty_weight();
        virtual double get_max_gross_weight();
        virtual double get_max_range();
        virtual double get_max_speed();
        virtual void print();
    

    protected:
        string id_info;
        double empty_weight;
        double max_gross_weight;
        double max_range;
        double max_speed;




};
#endif
