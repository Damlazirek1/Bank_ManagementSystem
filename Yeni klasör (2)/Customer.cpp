#include "Customer.h"

Customer::Customer(int id, std::string name) : id(id), name(name) {}

int Customer::getId() const {
    return id;
}

std::string Customer::getName() const {
    return name;
}
