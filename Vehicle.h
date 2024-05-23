#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle {
    private:
        string make;
        string model;
        float price;
    public:
        Vehicle();
        Vehicle(string make, string model, float price);
        string get_make();
        float get_price();
        void set_price(float price);
        string get_model();

        virtual void display_information();

};
#endif