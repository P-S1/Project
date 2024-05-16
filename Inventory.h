#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Vehicle.h"

class Inventory {
private:
    std::vector<Vehicle*> vehicles;
    int capacity;

public:
    Inventory(int capacity);
    ~Inventory();

    void add_vehicle(Vehicle* vehicle);
    void remove_vehicle(Vehicle* vehicle);
    void display_all_vehicles();
    float calculate_total_inventory_value();
    int get_capacity() const;
    int get_num_vehicles() const;
};

#endif  // INVENTORY_H