// FILENAME: imperial_units.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 06/18/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: imperial_units.cpp, imperial_units.h, international_units.h
// PURPOSE:
//          Define the implementation of the member functions
//          of the ImperialUnits class and define the conversion
//          Allow the conversion of ImperialUnits class instances to
//          InternationalUnits class instances and viceversa.

#include <iostream>
#include "imperial_units.h"
#include "international_units.h"

using std::cout;

    // ImperialUnits Constructor definitions:
ImperialUnits::ImperialUnits(){
    furlong = 0;
    yards = 0;
    feet = 0.0;
}
ImperialUnits::ImperialUnits(int& flong, int& yds, double& ft){
    feet = ft;
    furlong = flong;
    yards = yds;
}
ImperialUnits::ImperialUnits(InternationalUnits& iu){
    double total_meters = (iu.get_km()* 1000) + iu.get_m();
    double total_fur = total_meters *(one_fur/m_in_one_fur);
    
    // Get whole furlongs:
    furlong = static_cast<int>(total_fur);
    total_fur -= furlong;

    // Get whole yards:
    double total_yards = total_fur * yd_in_one_fur/one_fur;
    yards = static_cast<int>(total_yards);
    total_yards -= yards;

    // Get feet:
    feet = total_yards * ft_in_one_yd/one_yd;

}
    // Print Data:
void ImperialUnits::print(){
    cout <<"\n***\n";
    cout << "You entered:\n";
    cout<< furlong << " fur, " <<yards << " yd, " << "and "<<feet << "ft";
    cout <<"\n***\n";
}

    // Conversion to International Units:
ImperialUnits::operator InternationalUnits(){ 
    double total_meters = (furlong * m_in_one_fur) + (yards * m_in_one_yd) + (feet * m_in_one_ft); 
    double total_km = total_meters * km_in_one_m;
    // Get km (int):
    int km = static_cast<int>(total_km);
    total_km -= km;

    // Get meters (double):
    double m = total_km * m_in_one_km;
    return InternationalUnits(km, m);  
}
