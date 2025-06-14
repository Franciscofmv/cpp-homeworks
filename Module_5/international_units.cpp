#include "international_units.h"
#include "imperial_units.h"

    // Define Constructors:
InternationalUnits::InternationalUnits(){
    kilometers = 0;
    meters = 0.0;
}
InternationalUnits::InternationalUnits(int& km, double& m){
    kilometers = km;
    meters = m;
}
    // Covnersion Operator:
