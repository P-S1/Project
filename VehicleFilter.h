#ifndef VEHICLE_FILTER_H
#define VEHICLE_FILTER_H

#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include <cfloat>
#include <vector>
#include <string>

class VehicleFilter {
public:
    void setMake(const std::string& make);
    void setPriceRange(float minPrice, float maxPrice);
    void setBodyType(const std::string& bodyType);
    void setNumSeats(int numSeats);
    void setTransmissionType(const std::string& transmissionType);
    void setFuelType(const std::string& fuelType);
    void setEngineCapacity(int engineCapacity);
    void setLoadCapacity(int loadCapacity);

    std::vector<Vehicle*> filterVehicles(const std::vector<Vehicle*>& vehicles) const;

private:
    std::string make;
    float minPrice = 0.0f;
    float maxPrice = FLT_MAX;
    std::string bodyType;
    int numSeats = -1;
    std::string transmissionType;
    std::string fuelType;
    int engineCapacity = -1;
    int loadCapacity = -1;
};

#endif // VEHICLE_FILTER_H