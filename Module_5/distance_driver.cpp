// FILENAME: distance_driver.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 06/18/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: distance_driver.cpp, imperial_units.h, international_units.h
// PURPOSE:
//          Allow the user to enter in the two types of distances
//          and then display the conversions for each entry:
//          Furlongs, yards and feet (Imperial Units)
//          Kilometers and meters (International Units)


#include <iostream>
#include "imperial_units.h"
#include "international_units.h"

using std::cin;
using std::cout;
using std::endl;


int main(){
    int fur,yd;
    double ft;
        // Define Imperial Units:
    cout << "\n***\n";
    cout << "\nImperial Units\n";
    cout << "Please enter 'furlong yards feet' distance: \n";
    cin >> fur >> yd >> ft;
        // Convert Imperial Units to InternationalUnits:
    ImperialUnits imp_units(fur, yd, ft);
    InternationalUnits int_unit_conv(imp_units);

        // Print ImperialUnits and InternationalUnits equivalencies:
    cout << "\nYou entered:\n";
    cout << imp_units.get_furlong() << "fur, " << imp_units.get_yards() << "yd, and " 
         << imp_units.get_ft() << "ft\n\n";
    cout << "This is equivalent to: \n" 
         << int_unit_conv.get_km() << "km and " 
         << int_unit_conv.get_m() << "m";
    cout <<"\n***\n";
        
        // Define InternationalUnits:
    int km;
    double m;
    cout <<"\n***\n";
    cout <<"\nInternational Units\n" << "Please enter 'km m' distance: ";
    cin >> km >> m;
    InternationalUnits int_units(km, m);
    ImperialUnits imp_units_conv = int_units;
    
        // Print Int.Units and Imperial Units Equivalencies:
    cout << "\nYou entered:\n" << int_units.get_km() << " km and " << int_units.get_m() << " m\n\n";
    cout << "This is equivalent to: \n"
         << imp_units_conv.get_furlong() << " fur, " << imp_units_conv.get_yards() << "yd, and "
         << imp_units_conv.get_ft() << " ft";
    cout <<"\n***\n";

    return 0;
}