#include "Car.h"
#include <iostream>
#include <string>

Car::Car() {
    // Default constructor
}

Car::Car(string make, string model, int price, string transmission_type, string fuel_type,
         int numOfSeats, string body_type)
    : LightVehicle(make, model, price, transmission_type, fuel_type),
      numOfSeats(numOfSeats), body_type(body_type) {
    // Parameterized constructor
}

void Car::display_information() {
    LightVehicle::display_information();
    cout << "|  Number of Seats: " << numOfSeats << endl;
    cout << "|  Body Type: " << body_type << endl;
}

string Car::get_body_type(){
    return body_type;
}

int Car::get_numOfSeats(){
    return numOfSeats;
}