#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "Customer.h"
#include "Account.h"

class Database {
public:
    void addCustomer(Customer* customer) {
        customers.push_back(customer);
    }
    void addAccount(Account* account) {
        accounts.push_back(account);
    }
    Customer* getCustomer(int id) {
        for (size_t i = 0; i < customers.size(); ++i) {
            if (customers[i]->getId() == id) {
                return customers[i];
            }
        }
        return NULL; // NULL kullanýmý
    }
    Account* getAccount(int id) {
        for (size_t i = 0; i < accounts.size(); ++i) {
            if (accounts[i]->getId() == id) {
                return accounts[i];
            }
        }
        return NULL; // NULL kullanýmý
    }
    double calculateTotalFunds() {
        double total = 0.0;
        for (size_t i = 0; i < accounts.size(); ++i) {
            total += accounts[i]->getBalance();
        }
        return total;
    }
    int getTotalAccountCount() {
        return accounts.size();
    }
    std::vector<Account*> getAccounts() {
        return accounts;
    }

private:
    std::vector<Customer*> customers;
    std::vector<Account*> accounts;
};

#endif

