#include "distances.h"

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