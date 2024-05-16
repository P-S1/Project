#ifndef LIGHTVEHICLE_H
#define LIGHTVEHICLE_H
#include <string>

#include "Vehicle.h"

class LightVehicle : public Vehicle {
    private:
        string transmission_type;
        string fuel_type;
    public:
        LightVehicle();
        LightVehicle(string make, string model, int price, string transmission_type, string fuel_type);

        // Redefine display_information() to include additional details specific to LightVehicle
        void display_information();
        string get_transmission_type();
        string get_fuel_type();
        
};
#endif // LIGHTVEHICLE_H