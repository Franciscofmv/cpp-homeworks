#include <iostream>

#include "car.h"
#include "boat.h"
#include "airplane.h"
#include "vehicle.h"

using std::string;
using std::cout;
using std::endl;
Airplane createAirbusA320();
Car createEmira();
Boat createYamahaAR220();

int main(){
        // Airplane Specs:
    string airplane_info = "2019 AIRBUS A320";
    double airplane_empty_weight = 82078;
    double airplane_max_gross_weight = 169750;
    double airplane_range_max = 3300;
    double airplane_speed_max = 541;
        // Create Airplane:
    Vehicle v(
    airplane_info, airplane_empty_weight, airplane_max_gross_weight,
    airplane_range_max, airplane_speed_max
    );
    // Create Vehicles:
    Car Emira = createEmira();
    Boat YamahaAR220 = createYamahaAR220();
    Airplane AirbusA320 = createAirbusA320();

    // Print features:
    cout << endl;
    Emira.print();

    cout << endl;
    YamahaAR220.print();

    cout << endl;
    AirbusA320.print();
    

    return 0;
}

Airplane createAirbusA320(){
        // Airplane Specs:
    string airplane_info = "2019 AIRBUS A320";
    double airplane_empty_weight = 82078;
    double airplane_max_gross_weight = 169750;
    double airplane_range_max = 3300;
    double airplane_speed_max = 541;
        // Create Airplane:
    Airplane AirbusA320(
    airplane_info, airplane_empty_weight, airplane_max_gross_weight,
    airplane_range_max, airplane_speed_max
    );
    return AirbusA320;
}
Car createEmira(){
        // Car Specs:
    string car_info = "2026 Lotus Emira V6 SE";
    double empty_weight = 3212.0;
    double max_gross_weight = 3887.0;
    double range_max = 332.0;
    double speed_max = 180.0;
        // Create Car:
    Car Emira(
        car_info, empty_weight, max_gross_weight, 
        range_max, speed_max);
    
    return Emira;
}
Boat createYamahaAR220(){

        // Boat Specs:
    string boat_info = "2025 Yamaha AR220 22-foot boat";
    double boat_empty_weight = 3538.0;
    double boat_max_gross_weight = 5738.0;
    double boat_range_max = 170;
    double boat_speed_max = 50;
        // Create Boat:
    Boat YamahaAR220(
        boat_info, boat_empty_weight, boat_max_gross_weight, 
        boat_range_max, boat_speed_max);
    
    return YamahaAR220;
}