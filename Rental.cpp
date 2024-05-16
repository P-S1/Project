#include "Rental.h"
#include <iostream>


Rental::Rental(const std::string& transaction_id, const std::string& date)

    : Service(transaction_id, date) {}


void Rental::processService() {
    std::cout << "Processing the Rental transaction ID: " << getTransactionId() << " on date: " << getDate() << std::endl;
}
