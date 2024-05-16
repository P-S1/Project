#include "LightVehicle.h"
#include <iostream>
#include <string>

LightVehicle::LightVehicle() {
    // Default constructor
}

LightVehicle::LightVehicle(string make, string model, int price, string transmission_type, string fuel_type)
    : Vehicle(make, model, price), transmission_type(transmission_type), fuel_type(fuel_type) {
    // Parameterized constructor
}

void LightVehicle::display_information() {
    Vehicle::display_information();
    cout << "Transmission Type: " << transmission_type << endl;
    cout << "Fuel Type: " << fuel_type << endl;
}
string LightVehicle::get_fuel_type(){
    return fuel_type;
}
string LightVehicle::get_transmission_type(){
    return transmission_type;
}