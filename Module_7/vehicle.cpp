//*********************************************
// FILENAME: vehicle.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/19/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: vehicle.h, vehicle.cpp
// PURPOSE: Implementation for the constructor
//          and methods of the ADT class Vechicle.
//          This class will serve as Base class
//          for all other classes in this module.
//*********************************************
#include <iostream>
#include "vehicle.h"
using std::cout;
using std::endl;

        // Constructor
Vehicle::Vehicle(
    string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max){
        id_info = id;
        empty_weight = empty_w;
        max_gross_weight = max_gross_w;
        max_range = range_max;
        max_speed = speed_max;
}
        //Get identification information:
string Vehicle::get_id_info(){return id_info;}
        // Get empty weight of vehicle:
double Vehicle::get_empty_weight(){return empty_weight;}
        // Get max gross weight of vehicle:
double Vehicle::get_max_gross_weight(){return max_gross_weight;}
        // Get max range with a full tank of combustible for vehicle:
double Vehicle::get_max_range(){return max_range;}
        // Get the max speed of vehicle in mph:
double Vehicle::get_max_speed(){return max_speed;}

        //Print features:
void Vehicle::print(){
        cout << this->get_id_info() << endl;
        cout << "Transportation mode: " << this->get_trans_mode() << endl;
        cout << "Empty weight: " << this->get_empty_weight() << " lbs"<< endl;
        cout << "Max gross weight: " << this->get_max_gross_weight() << " lbs"<<endl;
        cout << "Maximum range: " << this->get_max_range() << " miles" <<endl;
        cout << "Maximum speed: " << this->get_max_speed() << " mph" <<endl;
}
