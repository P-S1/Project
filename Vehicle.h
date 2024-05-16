#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model, double price)
        : make(make), model(model), price(price) {}

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    double getPrice() const { return price; }

private:
    std::string make;
    std::string model;
    double price;
};