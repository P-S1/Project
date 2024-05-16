#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"
#include "Inventory.h"

int main() {
    // Create instances of vehicles
    Vehicle* vehicle1 = new Car("Toyota", "Camry", 25000, "Automatic", "Petrol", 5, "Sedan");
    Vehicle* vehicle2 = new Motorbike("Honda", "CBR500R", 8000, "Manual", "Petrol", 500);
    Vehicle* vehicle3 = new Truck("Volvo", "FH16", 150000, "Automatic", "Diesel", 40);

    // Create an inventory with a capacity of 2
    Inventory inventory(2);

    // Add vehicles to the inventory
    inventory.add_vehicle(vehicle1);
    inventory.add_vehicle(vehicle2);

    // Try to add another vehicle (should display an error message)
    inventory.add_vehicle(vehicle3);

    // Display all vehicles in the inventory
    inventory.display_all_vehicles();
    std::cout << std::endl;

    // Search for a vehicle by make and model
    

    // Calculate the total value of the inventory
    float totalValue = inventory.calculate_total_inventory_value();
    std::cout << "Total inventory value: $" << totalValue << std::endl;
    std::cout << std::endl;

    // Remove a vehicle from the inventory
    inventory.remove_vehicle(vehicle1);

    // Display all vehicles in the inventory again
    inventory.display_all_vehicles();

    // Clean up memory
    delete vehicle1;
    delete vehicle2;
    delete vehicle3;

    return 0;
}