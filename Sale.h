#ifndef SALE_H
#define SALE_H
#include "Customer.h"
#include "Vehicle.h"

class Sale {
    private:
        Customer customer;
        Vehicle* vehicle;
    public:
         Sale(Customer customer, Vehicle* vehicle);
         void displayTransaction ();

};
#endif