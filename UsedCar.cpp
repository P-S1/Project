#include "UsedCar.h"
#include <iostream>
using namespace std;

UsedCar::UsedCar(){}
UsedCar::UsedCar(string make, string model, int price, string transmission_type, string fuel_type, int numOfSeats, string body_type, float distance_travel)
    : Car(make, model, price, transmission_type, fuel_type, numOfSeats, body_type), distance_travel(distance_travel) {}

void UsedCar::display_information() {
    Car::display_information();
    cout << "Distance traveled: " << distance_travel << endl;
}