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
    cout << "Please enter 'furlong yards feet' distance: \n";
    cin >> fur >> yd >> ft;
    ImperialUnits imp_units(fur, yd, ft);
    imp_units.print();
        // Convert Imperial Units to International Units:


    return 0;
}