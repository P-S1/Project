#ifndef SALE_H
#define SALE_H

#include "Service.h"
#include "Customer.h"

class Sale : public Service {
private:
    Customer* customer;  // Pointer to Customer object, indicating aggregation

public:
    Sale(const std::string& transaction_id, const std::string& date, Customer* customer);
    virtual ~Sale() = default;

    void processService() override;
};

#endif // SALE_H
