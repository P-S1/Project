#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "LightVehicle.h"

class Motorbike : public LightVehicle {
    private:
        int engine_capacity;
    public:
        Motorbike();
        Motorbike(string make, string model, int price, string transmission_type, string fuel_type, int engine_capacity);

    // Redefine display_information() to include additional details specific to Motorbike
        void display_information();
};

#endif // MOTORBIKE_H
