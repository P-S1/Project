#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>

#include "HeavyVehicle.h"

class Truck : public HeavyVehicle {
    private:
        int load_capacity;
    public:
        Truck();
        Truck(string make, string model, int price, string transmission_type, string fuel_type,int load_capacity);

        void display_information();
};

#endif // TRUCK_H
