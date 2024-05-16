#include "Sale.h"
#include <iostream>

Sale::Sale(const std::string& transaction_id, const std::string& date)
    : Service(transaction_id, date) {}

void Sale::processService() {
    std::cout << "Processing sale transaction ID: " << getTransactionId() << " on date: " << getDate() << std::endl;
}
