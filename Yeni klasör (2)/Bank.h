#ifndef BANK_H
#define BANK_H

#include "Database.h"

class Bank {
public:
    Bank() {}
    void createAccount(Account* account) {
        database.addAccount(account);
    }
    void createCustomer(Customer* customer) {
        database.addCustomer(customer);
    }
    Account* findAccount(int id) {
        return database.getAccount(id);
    }
    Customer* findCustomer(int id) {
        return database.getCustomer(id);
    }
    void displayAllAccounts() {
        std::vector<Account*> accounts = database.getAccounts();
        for (size_t i = 0; i < accounts.size(); ++i) {
            std::cout << "Account ID: " << accounts[i]->getId() << ", Balance: " << accounts[i]->getBalance() << std::endl;
        }
    }
    double getTotalFunds() {
        return database.calculateTotalFunds();
    }
    int getTotalAccountCount() {
        return database.getTotalAccountCount();
    }
    bool depositToAccount(int accountId, double amount) {
        Account* account = findAccount(accountId);
        if (account) {
            account->deposit(amount);
            return true;
        }
        return false;
    }
    bool withdrawFromAccount(int accountId, double amount) {
        Account* account = findAccount(accountId);
        if (account && account->getBalance() >= amount) {
            account->withdraw(amount);
            return true;
        }
        return false;
    }

private:
    Database database;
};

#endif

