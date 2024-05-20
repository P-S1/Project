#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "VehicleFilter.h"
#include "Rental.h"
#include "Sale.h"
#include "Customer.h"
#include <iostream>
#include <vector>
#include <limits>
#include "Menu.h"
#include "Interface.h"

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
    std::vector<std::string> priceRanges = { "under 25000", "25000-35000", "35000-45000", "above 45000" };



    VehicleFilter filter;
    Menu menu;
    int choice;
    float minPrice, maxPrice;
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
            case 3:
                filter.setBodyType(menu.selectOption("Select Body Type", bodyTypes));
                break;
            case 4:
                filter.setNumSeats(menu.getIntInput("Enter Number of Seats: "));
                break;
            case 5:
                filter.setTransmissionType(menu.selectOption("Select Transmission Type", transmissionTypes));
                break;
            case 6:
                filter.setFuelType(menu.selectOption("Select Fuel Type", fuelTypes));
                break;
            case 7:
                filter.setEngineCapacity(menu.getIntInput("Enter Engine Capacity: "));
                break;
            case 8:
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

                    int transactionChoice;
                    std::cout << "Would you like to rent or sale? (1 for rent, 2 for sale): ";
                    std::cin >> transactionChoice;

                    if (transactionChoice == 1) {
                        std::cout << "Enter customer's name: ";
                        std::string customerName;
                        std::cin.ignore();
                        std::getline(std::cin, customerName);
                        std::cout << "Enter customer's phone number: ";
                        std::string customerPhoneNumber;
                        std::getline(std::cin, customerPhoneNumber);

                        std::cout << "Select a vehicle to rent: ";
                        int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                        Vehicle* rentedVehicle = filteredVehicles[vehicleChoice - 1];
                        std::cout << "You have rented " << rentedVehicle->get_make() << " " << rentedVehicle->get_model() << std::endl;

                        std::cout << "Enter rental days: ";
                        int rentalDays;
                        std::cin >> rentalDays;

                        Customer customer(customerName, customerPhoneNumber);
                        Rental rentalTransaction(customer, rentedVehicle, rentalDays);
                        rentalTransaction.displayTransaction();

                        // Remove the vehicle from the list
                        for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
                            if (*it == rentedVehicle) {
                                vehicles.erase(it);
                                break;
                            }
                        }
                    } else if (transactionChoice == 2) {
                        std::cout << "Enter customer's name: ";
                        std::string customerName;
                        std::cin.ignore();
                        std::getline(std::cin, customerName);
                        std::cout << "Enter customer's phone number: ";
                        std::string customerPhoneNumber;
                        std::getline(std::cin, customerPhoneNumber);

                        std::cout << "Select a vehicle to purchase: ";
                        int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                        Vehicle* soldVehicle = filteredVehicles[vehicleChoice - 1];
                        std::cout << "You have purchased " << soldVehicle->get_make() << " " << soldVehicle->get_model() << std::endl;

                        Customer customer(customerName, customerPhoneNumber);
                        Sale saleTransaction(customer, soldVehicle);
                        saleTransaction.displayTransaction();

                        // Remove the vehicle from the list
                        for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
                            if (*it == soldVehicle) {
                                vehicles.erase(it);
                                break;
                            }
                        }
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