#ifndef RENTAL_H
#define RENTAL_H
#include "Customer.h"
#include "Vehicle.h"

class Rental {
    private:
        Customer customer;
        Vehicle* vehicle;
        int rentalDays;
    public:
         Rental(Customer customer, Vehicle* vehicle, int rentalDays);
         void displayTransaction ();

};
#endif