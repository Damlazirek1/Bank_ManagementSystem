#include "Bank.h"
#include <iostream>

Bank::Bank() {}

void Bank::createAccount(Account* account) {
    database.addAccount(account);
}

void Bank::createCustomer(Customer* customer) {
    database.addCustomer(customer);
}

Account* Bank::findAccount(int id) {
    return database.getAccount(id);
}

Customer* Bank::findCustomer(int id) {
    return database.getCustomer(id);
}

void Bank::displayAllAccounts() {
    std::vector<Account*> accounts = database.getAccounts();
    for (size_t i = 0; i < accounts.size(); ++i) {
        std::cout << "Account ID: " << accounts[i]->getId() << ", Balance: " << accounts[i]->getBalance() << std::endl;
    }
}

double Bank::getTotalFunds() {
    return database.calculateTotalFunds();
}

int Bank::getTotalAccountCount() {
    return database.getTotalAccountCount();
}

bool Bank::depositToAccount(int accountId, double amount) {
    Account* account = findAccount(accountId);
    if (account) {
        account->deposit(amount);
        return true;
    }
    return false;
}

bool Bank::withdrawFromAccount(int accountId, double amount) {
    Account* account = findAccount(accountId);
    if (account && account->getBalance() >= amount) {
        account->withdraw(amount);
        return true;
    }
    return false;
}
