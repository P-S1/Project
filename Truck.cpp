#include "Truck.h"
#include <iostream>

Truck::Truck() {
    // Default constructor
}

Truck::Truck(string make, string model, int price, string transmission_type, string fuel_type,
             int load_capacity)
    : HeavyVehicle(make, model, price, load_capacity), load_capacity(load_capacity) {
    // Parameterized constructor
}

void Truck::display_information() {
    HeavyVehicle::display_information();
    cout << "Load Capacity: " << load_capacity << " tons" << endl;
}

