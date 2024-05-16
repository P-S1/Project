#ifndef HEAVYVEHICLE_H
#define HEAVYVEHICLE_H


#include "Vehicle.h"
#include <string>

class HeavyVehicle : public Vehicle {
    private:
        int load_capacity;
    public:
    HeavyVehicle();
    HeavyVehicle(string make, string model, int price, int load_capacity);
        

    // Redefine display_information() to include additional details specific to HeavyVehicle
    void display_information();
};

#endif // HEAVYVEHICLE_H