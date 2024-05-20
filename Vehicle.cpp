#include "Vehicle.h"
#include <iostream>
#include <string>

Vehicle::Vehicle() {
    // Default constructor
}

Vehicle::Vehicle(string make, string model, float price)
    : make(make), model(model), price(price) {
    // Parameterized constructor
}

void Vehicle::display_information() {
    cout << "|  Make: " << make << endl;
    cout << "|  Model: " << model << endl;
    cout << "|  Price: " << price <<" AUD" << endl;
}

float Vehicle::get_price() {
    return price;
}

void Vehicle::set_price(float price) {
    this->price = price;
}
string Vehicle::get_make(){
    return make;
}
string Vehicle::get_model(){
    return model;
}