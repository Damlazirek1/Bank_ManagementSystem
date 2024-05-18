#include "Database.h"

void Database::addAccount(Account* account) {
    accounts.push_back(account);
}

void Database::addCustomer(Customer* customer) {
    customers.push_back(customer);
}

Account* Database::getAccount(int id) {
    for (size_t i = 0; i < accounts.size(); ++i) {
        if (accounts[i]->getId() == id) {
            return accounts[i];
        }
    }
    return NULL;
}

Customer* Database::getCustomer(int id) {
    for (size_t i = 0; i < customers.size(); ++i) {
        if (customers[i]->getId() == id) {
            return customers[i];
        }
    }
    return NULL;
}

std::vector<Account*> Database::getAccounts() {
    return accounts;
}

double Database::calculateTotalFunds() {
    double total = 0.0;
    for (size_t i = 0; i < accounts.size(); ++i) {
        total += accounts[i]->getBalance();
    }
    return total;
}

int Database::getTotalAccountCount() {
    return accounts.size();
}
