#include <iostream>
#include "Customer.h"



Customer::Customer(std::string name, std::string phoneNumber) 
    : name(name), phoneNumber(phoneNumber) {}

std::string Customer::getName() { return name; }
std::string Customer::getPhoneNumber() { return phoneNumber; }