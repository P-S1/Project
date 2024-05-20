#include "Rental.h"
#include <iostream>
#include "Customer.h"
#include "Vehicle.h"

    Rental::Rental(Customer customer, Vehicle* vehicle, int rentalDays) 
        : customer(customer), vehicle(vehicle), rentalDays(rentalDays) {}

    void Rental::displayTransaction() {
        std::cout << "\n\n";
        std::cout << "***********************************************\n";
        std::cout << "*                                             *\n";
        std::cout << "*          Rental Transaction Receipt         *\n";
        std::cout << "*                                             *\n";
        std::cout << "***********************************************\n";
        std::cout << "      Customer: " << customer.getName() << " (" << customer.getPhoneNumber() << ")\n";
        std::cout << "      Vehicle: " << vehicle->get_make() << " " << vehicle->get_model() << "\n";
        std::cout << "      Rental Days: " << rentalDays << "\n";
        std::cout << "      Rental Price per day: " << vehicle->get_price()*0.01 << " AUD" << "\n";
        std::cout << "      Total payment: " << rentalDays*vehicle->get_price()*0.01 << " AUD" << "\n";
        std::cout << "***********************************************\n";
        std::cout << "*                                             *\n";
        std::cout << "*  Thank you for choosing our rental service  *\n";
        std::cout << "*                                             *\n";
        std::cout << "***********************************************\n";
        std::cout << "\n\n";
    }