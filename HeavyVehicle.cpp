#include "HeavyVehicle.h"
#include <iostream>
using namespace std;

HeavyVehicle::HeavyVehicle() {
    // Default constructor
}

HeavyVehicle::HeavyVehicle(string make, string model, int price, int load_capacity)
    : Vehicle(make, model, price), load_capacity(load_capacity) {
    // Parameterized constructor
}

void HeavyVehicle::display_information() {}
//     Vehicle::display_information();
//     cout << "Load Capacity: " << load_capacity << " tons" << endl;
// }