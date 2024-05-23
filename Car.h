#ifndef CAR_H
#define CAR_H

#include "LightVehicle.h"
#include <string>

class Car : public LightVehicle {
    private:
        int numOfSeats;
        std::string body_type;

    public:
        Car();
        Car(string make, string model, int price, string transmission_type, string fuel_type, int numOfSeats, string body_type);
        // Redefine display_information() to include additional details specific to Car
        void display_information();
        string get_body_type();
        int get_numOfSeats();

};

#endif // CAR_H