#include "Motorbike.h"
#include <iostream>

Motorbike::Motorbike() {
    // Default constructor
}

Motorbike::Motorbike(string make, string model, int price, string transmission_type,
                     string fuel_type, int engine_capacity)
    : LightVehicle(make, model, price, transmission_type, fuel_type),
      engine_capacity(engine_capacity) {
    // Parameterized constructor
}

void Motorbike::display_information() {
    LightVehicle::display_information();
    cout << "Engine Capacity: " << engine_capacity << " cc" << endl;
}
int Motorbike::get_engine_capacity(){
    return engine_capacity;
}