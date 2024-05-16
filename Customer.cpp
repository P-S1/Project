#include "Customer.h"


Customer::Customer(const std::string& name, const std::string& contact_info)

    : name(name), contact_info(contact_info) {}

std::string Customer::getName() const {

    return name;
}

std::string Customer::getContactInfo() const {
    
    return contact_info;
}
