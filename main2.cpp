#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "VehicleFilter.h"
#include <iostream>
#include <vector>
#include <limits>
#include "Menu.h"

int main() {
    // Create some vehicles
    Car car1("Toyota", "Camry", 30000, "Automatic", "Gasoline", 5, "Sedan");
    Car car2("Honda", "Civic", 25000, "Manual", "Gasoline", 5, "Sedan");
    Motorbike bike1("Yamaha", "MT-07", 7500, "Manual", "Gasoline", 689);
    Truck truck1("Volvo", "FH16", 120000, "Automatic", "Diesel", 25.0);

    std::vector<Vehicle*> vehicles = { &car1, &car2, &bike1, &truck1 };

    std::vector<std::string> makes = { "Toyota", "Honda", "Yamaha", "Volvo", "Mercedes" };
    std::vector<std::string> bodyTypes = { "Sedan", "SUV", "Truck", "Motorbike" };
    std::vector<std::string> transmissionTypes = { "Automatic", "Manual" };
    std::vector<std::string> fuelTypes = { "Gasoline", "Diesel", "Electric" };
    std::vector<std::string> PriceRange = { "under 25000", "25000-35000", "35000-45000", "above 45000"};



    VehicleFilter filter;
    Menu menu;
    int choice;
    float minPrice;
    float maxPrice;
    int inputInt;

    do {
        menu.displayMenu();
        choice = menu.getChoice(0, 10);
 

        switch (choice) {
            case 1:
                filter.setMake(menu.selectOption("Select Make", makes));
                break;
            case 2:
                std::cout << "Enter your MIN Price: ";
                std::cin >> minPrice;
                std::cout << "\nEnter your MAX Price: ";
                std::cin >> maxPrice;
                filter.setPriceRange(minPrice, maxPrice);
                break;
            case 4:
                filter.setBodyType(menu.selectOption("Select Body Type", bodyTypes));
                break;
            case 5:
                filter.setNumSeats(menu.getIntInput("Enter Number of Seats: "));
                break;
            case 6:
                filter.setTransmissionType(menu.selectOption("Select Transmission Type", transmissionTypes));
                break;
            case 7:
                filter.setFuelType(menu.selectOption("Select Fuel Type", fuelTypes));
                break;
            case 8:
                filter.setEngineCapacity(menu.getIntInput("Enter Engine Capacity: "));
                break;
            case 9:
                filter.setLoadCapacity(menu.getFloatInput("Enter Load Capacity: "));
                break;
            case 10:
{
                std::vector<Vehicle*> filteredVehicles = filter.filterVehicles(vehicles);
                if (filteredVehicles.empty()) {
                    std::cout << "No vehicle match" << std::endl;
                } else {
                    std::cout << "\n----Filtered Vehicles----\n";
                    for (const auto& vehicle : filteredVehicles) {
                        vehicle->display_information();
                        std::cout << "-------------------------\n";
                    }
                }
                break;
            }
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}