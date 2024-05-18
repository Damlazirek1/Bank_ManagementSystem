#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    Customer(int id, std::string name) : id(id), name(name) {}
    int getId() const { return id; }
    std::string getName() const { return name; }

private:
    int id;
    std::string name;
};

#endif

