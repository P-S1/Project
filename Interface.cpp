#include "Interface.h"

Interface::Interface()
: filter(), menu() {}

Interface::~Interface() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}
void Interface::set_vehicles(const std::vector<Vehicle*>& vehicles) {
    this->vehicles = vehicles;
}

void Interface::run() {
    int choice;
    int vehicleTypeChoice;
    do {
        menu.displayVehicleTypeMenu();
        vehicleTypeChoice = menu.getChoice(0, 3);
        switch (vehicleTypeChoice){
            case 1:
                {do{
                    menu.displayCarMenu();
                    choice = menu.getChoice(0,10);
                    switch (choice) {
                        case 1:
                            filter.setMake(menu.selectOption("Select Make", { "Toyota", "Honda", "BMW", "Volvo", "Audi", "Mercedes" }));
                            break;
                        case 2:
                        {
                            float minPrice, maxPrice;
                            std::cout << "Enter your MIN Price: ";
                            std::cin >> minPrice;
                            std::cout << "\nEnter your MAX Price: ";
                            std::cin >> maxPrice;
                            filter.setPriceRange(minPrice, maxPrice);
                            break;
                        }
                        case 3:
                            filter.setBodyType(menu.selectOption("Select Body Type", { "Sedan", "SUV", "Truck", "Motorbike" }));
                            break;
                        case 4:
                            filter.setNumSeats(menu.getIntInput("Enter Number of Seats: "));
                            break;
                        case 5:
                            filter.setTransmissionType(menu.selectOption("Select Transmission Type", { "Automatic", "Manual" }));
                            break;
                        case 6:
                            filter.setFuelType(menu.selectOption("Select Fuel Type", { "Gasoline", "Diesel" }));
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
                                    std::cout << "Select a vehicle to rent: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "rent");
                                } else if (transactionChoice == 2) {
                                    std::cout << "Select a vehicle to purchase: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "sale");
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
                break;
                }
            case 2:
                {
                    do{
                    menu.displayMotorbikeMenu();
                    choice = menu.getChoice(0,10);
                    switch (choice) {
                        case 1:
                            filter.setMake(menu.selectOption("Select Make", { "Toyota", "Honda", "BMW", "Volvo", "Audi", "Mercedes" }));
                            break;
                        case 2:
                        {
                            float minPrice, maxPrice;
                            std::cout << "Enter your MIN Price: ";
                            std::cin >> minPrice;
                            std::cout << "\nEnter your MAX Price: ";
                            std::cin >> maxPrice;
                            filter.setPriceRange(minPrice, maxPrice);
                            break;
                        }
                        case 4:
                            filter.setTransmissionType(menu.selectOption("Select Transmission Type", { "Automatic", "Manual" }));
                            break;
                        case 5:
                            filter.setFuelType(menu.selectOption("Select Fuel Type", { "Gasoline", "Diesel" }));
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
                                    std::cout << "Select a vehicle to rent: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "rent");
                                } else if (transactionChoice == 2) {
                                    std::cout << "Select a vehicle to purchase: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "sale");
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
                break;
                }
            case 3:
                {
                    do{
                    menu.displayMotorbikeMenu();
                    choice = menu.getChoice(0,10);
                    switch (choice) {
                        case 1:
                            filter.setMake(menu.selectOption("Select Make", { "Toyota", "Honda", "BMW", "Volvo", "Audi", "Mercedes" }));
                            break;
                        case 2:
                        {
                            float minPrice, maxPrice;
                            std::cout << "Enter your MIN Price: ";
                            std::cin >> minPrice;
                            std::cout << "\nEnter your MAX Price: ";
                            std::cin >> maxPrice;
                            filter.setPriceRange(minPrice, maxPrice);
                            break;
                        }
                        case 3:
                            filter.setTransmissionType(menu.selectOption("Select Transmission Type", { "Automatic", "Manual" }));
                            break;
                        case 4:
                            filter.setFuelType(menu.selectOption("Select Fuel Type", { "Gasoline", "Diesel" }));
                            break;
                        case 5:
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
                                    std::cout << "Select a vehicle to rent: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "rent");
                                } else if (transactionChoice == 2) {
                                    std::cout << "Select a vehicle to purchase: ";
                                    int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
                                    process_transaction(vehicleChoice - 1, "sale");
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
                break;
                }
            }


        } while (choice != 0);
    }



    void Interface::display_vehicles() const {
        for (const auto& vehicle : vehicles) {
            vehicle->display_information();
            std::cout << "-------------------------\n";
        }
}


        
        
        
//         menu.displayMenu();
//         switch (choice) {
//             case 1:
//                 filter.setMake(menu.selectOption("Select Make", { "Toyota", "Honda", "Yamaha", "Volvo" }));
//                 break;
//             case 2:
//             {
//                 float minPrice, maxPrice;
//                 std::cout << "Enter your MIN Price: ";
//                 std::cin >> minPrice;
//                 std::cout << "\nEnter your MAX Price: ";
//                 std::cin >> maxPrice;
//                 filter.setPriceRange(minPrice, maxPrice);
//                 break;
//             }
//             case 4:
//                 filter.setBodyType(menu.selectOption("Select Body Type", { "Sedan", "SUV", "Truck", "Motorbike" }));
//                 break;
//             case 5:
//                 filter.setNumSeats(menu.getIntInput("Enter Number of Seats: "));
//                 break;
//             case 6:
//                 filter.setTransmissionType(menu.selectOption("Select Transmission Type", { "Automatic", "Manual" }));
//                 break;
//             case 7:
//                 filter.setFuelType(menu.selectOption("Select Fuel Type", { "Gasoline", "Diesel" }));
//                 break;
//             case 8:
//                 filter.setEngineCapacity(menu.getIntInput("Enter Engine Capacity: "));
//                 break;
//             case 9:
//                 filter.setLoadCapacity(menu.getFloatInput("Enter Load Capacity: "));
//                 break;
//             case 10:
//             {
//                 std::vector<Vehicle*> filteredVehicles = filter.filterVehicles(vehicles);
//                 if (filteredVehicles.empty()) {
//                     std::cout << "No vehicle match" << std::endl;
//                 } else {
//                     std::cout << "\n----Filtered Vehicles----\n";
//                     for (const auto& vehicle : filteredVehicles) {
//                         vehicle->display_information();
//                         std::cout << "-------------------------\n";
//                     }

//                     int transactionChoice;
//                     std::cout << "Would you like to rent or sale? (1 for rent, 2 for sale): ";
//                     std::cin >> transactionChoice;

//                     if (transactionChoice == 1) {
//                         std::cout << "Select a vehicle to rent: ";
//                         int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
//                         process_transaction(vehicleChoice - 1, "rent");
//                     } else if (transactionChoice == 2) {
//                         std::cout << "Select a vehicle to purchase: ";
//                         int vehicleChoice = menu.getChoice(1, filteredVehicles.size());
//                         process_transaction(vehicleChoice - 1, "sale");
//                     }
//                 }
//                 break;
//             }
//             case 0:
//                 std::cout << "Exiting...\n";
//                 break;
//             default:
//                 std::cout << "Invalid choice. Please try again.\n";
//         }
//     } while (choice != 0);
// }

// void Interface::display_vehicles() const {
//     for (const auto& vehicle : vehicles) {
//         vehicle->display_information();
//         std::cout << "-------------------------\n";
//     }
// }

void Interface::process_transaction(int vehicle_index, const std::string& transaction_type) {
    std::vector<Vehicle*> filteredVehicles = filter.filterVehicles(vehicles);
    
    if (vehicle_index < 0 || vehicle_index >= vehicles.size()) {
        std::cout << "Invalid vehicle index. Please try again.\n";
        return ;
    }

    Vehicle* selected_vehicle = filteredVehicles[vehicle_index];

    if (transaction_type == "rent") {
        std::cout << "Enter customer's name: ";
        std::string customerName;
        std::cin.ignore();
        std::getline(std::cin, customerName);
        std::cout << "Enter customer's phone number: ";
        std::string customerPhoneNumber;
        std::getline(std::cin, customerPhoneNumber);

        std::cout << "Enter rental days: ";
        int rentalDays;
        std::cin >> rentalDays;

        Customer customer(customerName, customerPhoneNumber);
        Rental rentalTransaction(customer, selected_vehicle, rentalDays);
        rentalTransaction.displayTransaction();

        // Remove the vehicle from the list
        vehicles.erase(vehicles.begin() + vehicle_index);
    } else if (transaction_type == "sale") {
        std::cout << "Enter customer's name: ";
        std::string customerName;
        std::cin.ignore();
        std::getline(std::cin, customerName);
        std::cout << "Enter customer's phone number: ";
        std::string customerPhoneNumber;
        std::getline(std::cin, customerPhoneNumber);

        Customer customer(customerName, customerPhoneNumber);
        Sale saleTransaction(customer, selected_vehicle);
        saleTransaction.displayTransaction();

        // Remove the vehicle from the list
        vehicles.erase(vehicles.begin() + vehicle_index);
    }
}