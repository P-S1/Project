#include <iostream>
#include <vector>
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "VehicleFilter.h"

int main() {
    // Create some vehicles
    Car car1("Toyota", "Camry", 30000, "Automatic", "Gasoline", 5, "Sedan");
    Car car2("Honda", "Civic", 25000, "Manual", "Gasoline", 5, "Sedan");
    Motorbike bike1("Yamaha", "YZF-R3", 5000, "Manual", "Gasoline", 321);
    Truck truck1("Ford", "F-150", 40000, "Automatic", "Diesel", 3);

    // Put them into a list
    std::vector<Vehicle*> vehicles = { &car1, &car2, &bike1, &truck1 };

    // Create a filter
    VehicleFilter filter;
    filter.setMake("Yamaha");
    filter.setPriceRange(20000, 35000);
    filter.setBodyType("Sedan");

    // Get filtered vehicles
    std::vector<Vehicle*> filteredVehicles = filter.filterVehicles(vehicles);

    // Display filtered vehicles
    std::cout << "Filtered Vehicles:" << std::endl;
    for (Vehicle* vehicle : filteredVehicles) {
        vehicle->display_information();
        std::cout << std::endl;
    }

    return 0;
}