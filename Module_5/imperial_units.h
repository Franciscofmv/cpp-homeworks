// FILENAME: imperial_units.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 06/18/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: imperial_units.h, imperial_units.cpp, international_units.h
// PURPOSE:
//          Define the class ImperialUnits which stores
//          values for furlong, yards and feets and allows 
//          conversion between Imperial Units and the 
//          International Units kilometers and meters.

#include "international_units.h"

#ifndef IMPERIAL_UNITS_H_
#define IMPERIAL_UNITS_H_
#define one_fur         1
#define one_yd          1
#define one_ft          1
#define yd_in_one_fur   220
#define ft_in_one_fur   660
#define ft_in_one_yd    3
#define m_in_one_fur    201.168
#define m_in_one_ft     0.3048
#define m_in_one_yd     0.9144
#define m_in_one_km     1000
#define km_in_one_m     0.001

class ImperialUnits{
    private:
        int furlong;
        int yards;
        double feet;
    
    public:
            // Define constructors:
        ImperialUnits();
        ImperialUnits(int& flong, int& yds, double& ft);

            // Define inner conversions:
        ImperialUnits(InternationalUnits& iu);

            // Get private data members:
        int get_furlong(){return furlong;}
        int get_yards(){return yards;}
        double get_ft(){return feet;}

            // Print data:
        void print();
            
            // Operator to go from ImperialUnits to InternationalUnits:
        operator InternationalUnits();


};
#endif