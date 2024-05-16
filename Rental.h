#ifndef RENTAL_H
#define RENTAL_H

#include "Service.h"
#include "Customer.h"

class Rental : public Service {
private:
    Customer* customer;  // Pointer to Customer object, indicating aggregation

public:
    Rental(const std::string& transaction_id, const std::string& date, Customer* customer);
    virtual ~Rental() = default;

    void processService() override;
};

#endif // RENTAL_H
