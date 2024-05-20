#include "VehicleFilter.h"
#include <algorithm>
using namespace std;

void VehicleFilter::setMake(const std::string& make) {
    this->make = make;
}
void VehicleFilter::setPriceRange(float minPrice, float maxPrice) {
    this->minPrice = minPrice;
    this->maxPrice = maxPrice;
}

void VehicleFilter::setBodyType(const std::string& bodyType) {
    this->bodyType = bodyType;
}

void VehicleFilter::setNumSeats(int numSeats) {
    this->numSeats = numSeats;
}

void VehicleFilter::setTransmissionType(const std::string& transmissionType) {
    this->transmissionType = transmissionType;
}

void VehicleFilter::setFuelType(const std::string& fuelType) {
    this->fuelType = fuelType;
}

void VehicleFilter::setEngineCapacity(int engineCapacity) {
    this->engineCapacity = engineCapacity;
}

void VehicleFilter::setLoadCapacity(int loadCapacity) {
    this->loadCapacity = loadCapacity;
}

std::vector<Vehicle*> VehicleFilter::filterVehicles(const std::vector<Vehicle*>& vehicles) const {
    std::vector<Vehicle*> filteredVehicles;
    for (Vehicle* vehicle : vehicles) {
        // Check make
        if (!make.empty() && vehicle->get_make() != make) continue;
        
        // Check price range
        if (vehicle->get_price() < minPrice || vehicle->get_price() > maxPrice) continue;

        // Check specific attributes based on dynamic type
        if (Car* car = dynamic_cast<Car*>(vehicle)) {
            if (!bodyType.empty() && car->get_body_type() != bodyType) continue;
            if (numSeats != -1 && car->get_numOfSeats() != numSeats) continue;
        }
        
        if (Motorbike* motorbike = dynamic_cast<Motorbike*>(vehicle)) {
            if (engineCapacity != -1 && motorbike->get_engine_capacity() != engineCapacity) continue;
        }

        if (Truck* truck = dynamic_cast<Truck*>(vehicle)) {
            if (loadCapacity != -1 && truck->get_load_capacity() != loadCapacity) continue;
        }
    

        // If all checks pass, add to filtered list
        filteredVehicles.push_back(vehicle);
    }
    
    if (filteredVehicles.empty()) {
        cout << "No cars found!" << endl;
    }
    return filteredVehicles;
}