#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include <iostream>

class SavingsAccount : public Account {
public:
    SavingsAccount(int id, int ownerId, double initialBalance) : Account(id, ownerId, initialBalance) {}

    void deposit(double amount) override {
        setBalance(getBalance() + amount);
        std::cout << "Deposited to Savings: " << amount << ", New Balance: " << getBalance() << std::endl;
    }

    void withdraw(double amount) override {
        if (amount <= getBalance()) {
            setBalance(getBalance() - amount);
            std::cout << "Withdrawn from Savings: " << amount << ", New Balance: " << getBalance() << std::endl;
        } else {
            std::cout << "Insufficient funds in Savings Account." << std::endl;
        }
    }
};

#endif

