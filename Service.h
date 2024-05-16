#ifndef SERVICE_H
#define SERVICE_H

#include <string>


class Service {
protected:
    std::string transaction_id;
    std::string date;

public:
    Service(const std::string& transaction_id, const std::string& date);
    virtual ~Service() = default;

    std::string getTransaction_Id() const;
    std::string getDate() const;

    virtual void processService() = 0; 
    //  virtual function to be implemented by the derived classes
};

#endif // SERVICE_H
