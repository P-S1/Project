#include "Service.h"


Service::Service(const std::string& transaction_id, const std::string& date)
    : transaction_id(transaction_id), date(date) {}


std::string Service::getTransactionId() const {
    return transaction_id;
}

std::string Service::getDate() const {
    return date;
}
