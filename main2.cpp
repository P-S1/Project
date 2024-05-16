#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "VehicleFilter.h"
#include <iostream>
#include <vector>
#include <limits>

void displayMenu() {
    std::cout << "\n--- Vehicle Filter Menu ---\n";
    std::cout << "1. Set Make\n";
    std::cout << "2. Set Min Price\n";
    std::cout << "3. Set Max Price\n";
    std::cout << "4. Set Body Type\n";
    std::cout << "5. Set Number of Seats\n";
    std::cout << "6. Set Transmission Type\n";
    std::cout << "7. Set Fuel Type\n";
    std::cout << "8. Set Engine Capacity\n";
    std::cout << "9. Set Load Capacity\n";
    std::cout << "10. Apply Filter\n";
    std::cout << "0. Exit\n";
}

int main() {
    // Create some vehicles
    Car car1("Toyota", "Camry", 30000, "Automatic", "Gasoline", 5, "Sedan");
    Car car2("Honda", "Civic", 25000, "Manual", "Gasoline", 5, "Sedan");
    Motorbike bike1("Yamaha", "MT-07", 7500, "Manual", "Gasoline", 689);
    Truck truck1("Volvo", "FH16", 120000, "Automatic", "Diesel", 25.0);

    std::vector<Vehicle*> vehicles = { &car1, &car2, &bike1, &truck1 };

    VehicleFilter filter;
    int choice;
    std::string inputString;
    float minPrice;
    float maxPrice;
    int inputInt;

    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Clear input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                std::cout << "Enter Make: ";
                std::getline(std::cin, inputString);
                filter.setMake(inputString);
                break;
            case 2:
                std::cout << "Enter Min Price and Max Price: ";
                std::cin >> minPrice >> maxPrice;
                filter.setPriceRange(minPrice,maxPrice);
                break;
            case 4:
                std::cout << "Enter Body Type: ";
                std::getline(std::cin, inputString);
                filter.setBodyType(inputString);
                break;
            case 5:
                std::cout << "Enter Number of Seats: ";
                std::cin >> inputInt;
                filter.setNumSeats(inputInt);
                break;
            case 6:
                std::cout << "Enter Transmission Type: ";
                std::getline(std::cin, inputString);
                filter.setTransmissionType(inputString);
                break;
            case 7:
                std::cout << "Enter Fuel Type: ";
                std::getline(std::cin, inputString);
                filter.setFuelType(inputString);
                break;
            case 8:
                std::cout << "Enter Engine Capacity: ";
                std::cin >> inputInt;
                filter.setEngineCapacity(inputInt);
                break;
            case 9:
                std::cout << "Enter Load Capacity: ";
                std::cin >> minPrice;
                filter.setLoadCapacity(minPrice);
                break;
            case 10: {
                std::vector<Vehicle*> filteredVehicles = filter.filterVehicles(vehicles);
                if (filteredVehicles.empty()) {
                    std::cout << "No vehicle match" << std::endl;
                } else {
                    std::cout << "\nFiltered Vehicles:\n";
                    for (const auto& vehicle : filteredVehicles) {
                        vehicle->display_information();
                        std::cout << "-----------------\n";
                    }
                }
                break;
            }
            case 0:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}