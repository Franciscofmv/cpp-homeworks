// FILENAME: international_units.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 06/18/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: international_units.h, international_units.cpp
// PURPOSE:
//          Define the class of the ImperialUnits which stores
//          values for kilometers and meters.

#ifndef INTENATIONAL_UNITS_H_
#define INTENATIONAL_UNITS_H_

class InternationalUnits{
    private:
        int kilometers;
        double meters;

    public:
        // Constructors:
    InternationalUnits();
    InternationalUnits(int& km, double& m);

        // Get data members values:
    int get_km(){return kilometers;}
    double get_m(){return meters;}

        // Conversions:
        
};
#endif