#ifndef INTERFACE_H
#define INTERFACE_H

#include "Vehicle.h"
#include "VehicleFilter.h"
#include "Menu.h"
#include "Rental.h"
#include "Sale.h"

class Interface {
public:
    Interface();
    ~Interface();
    void run();
    void set_vehicles(const std::vector<Vehicle*>& vehicles);

private:
    std::vector<Vehicle*> vehicles;
    VehicleFilter filter;
    Menu menu;

    
    void display_vehicles() const;
    void process_transaction(int vehicle_index, const std::string& transaction_type);
};

#endif // INTERFACE_H