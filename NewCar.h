#ifndef USEDCAR_H
#define USEDCAR_H

#include "Car.h"
#include "String"

class UsedCar : public Car {
    private:
        float distance_travel;
    public:
        UsedCar();
        UsedCar(string make, string model, int price, string transmission_type, string fuel_type, int numOfSeats, string body_type, float distance_travel);
        void display_information();
};  
#endif