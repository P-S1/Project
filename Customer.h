#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer{
    private:
        std::string name;
        std::string phoneNumber;
    public:
        Customer(std::string name, std::string phoneNumber);
        std::string getName() ;
        std::string getPhoneNumber() ;

};
#endif