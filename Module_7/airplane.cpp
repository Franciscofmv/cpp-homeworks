//*********************************************
// FILENAME: airplane.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 07/19/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: airplane.h, airplane.cpp, vehicle.h, vehicle.cpp
// PURPOSE: Define implementation of the 
//          constructor and methods of the Airplane class.
//*********************************************


#include <iostream>
#include "airplane.h"
using std::cout;
using std::endl;

    // Constructor:
Airplane::Airplane(string& id, double& empty_w, double& max_gross_w, double& range_max, double& speed_max)
: Vehicle(id, empty_w, max_gross_w, range_max, speed_max){

}
    // Get transportation mode:
string Airplane::get_trans_mode(){
    return "by-air";
}
    // Print Airplane features:
void Airplane::print(){
    cout << this->get_id_info() << endl;
    cout << "Transportation mode: " << this->get_trans_mode() << endl;
    cout << "Empty weight: " << this->get_empty_weight() << " lbs"<< endl;
    cout << "Max gross weight: " << this->get_max_gross_weight() << " lbs"<<endl;
    cout << "Maximum range: " << this->get_max_range() << " nautical miles" <<endl;
    cout << "Maximum speed: " << this->get_max_speed() << " mph" <<endl;
}