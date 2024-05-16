#include <iostream>
#include <algorithm>
#include "Inventory.h"

Inventory::Inventory(int capacity) : capacity(capacity) {}

Inventory::~Inventory() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

void Inventory::add_vehicle(Vehicle* vehicle) {
    if (vehicles.size() < capacity) {
        vehicles.push_back(vehicle);
    } else {
        std::cout << "Inventory is full. Cannot add more vehicles." << std::endl;
    }
}

void Inventory::remove_vehicle(Vehicle* vehicle) {
    auto it = std::find(vehicles.begin(), vehicles.end(), vehicle);
    if (it != vehicles.end()) {
        vehicles.erase(it);
        delete vehicle;
    } else {
        std::cout << "Vehicle not found in the inventory." << std::endl;
    }
}

void Inventory::display_all_vehicles() {
    for (const auto& vehicle : vehicles) {
        vehicle->display_information();
        std::cout << std::endl;
    }
}

float Inventory::calculate_total_inventory_value() {
    float totalValue = 0.0;
    for (const auto& vehicle : vehicles) {
        totalValue += vehicle->get_price();
    }
    return totalValue;
}

int Inventory::get_capacity() const {
    return capacity;
}

int Inventory::get_num_vehicles() const {
    return vehicles.size();
}