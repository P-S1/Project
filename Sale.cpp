#include "Sale.h"
#include <iostream>
#include "Customer.h"
#include "Vehicle.h"


Sale::Sale(Customer customer, Vehicle* vehicle) 
    : customer(customer), vehicle(vehicle) {}

void Sale::displayTransaction() {
    std::cout << "Sale Transaction:\n";
    std::cout << "Customer: " << customer.getName() << " (" << customer.getPhoneNumber() << ")\n";
    std::cout << "Vehicle: " << vehicle->get_make() << " " << vehicle->get_model() << "\n";
    std::cout << "Price: " << vehicle->get_price() <<" AUD"<< "\n";
}