
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
    
private:
    std::string name;
    std::string contact_info;


public:
    Customer(const std::string& name, const std::string& contact_info);
    virtual ~Customer() = default;

    std::string getName() const;

    std::string getContactInfo() const;
};

#endif // CUSTOMER_H

