#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"
#include <iostream>

class CheckingAccount : public Account {
public:
    CheckingAccount(int id, int ownerId, double initialBalance) : Account(id, ownerId, initialBalance) {}

    void deposit(double amount) override {
        setBalance(getBalance() + amount);
        std::cout << "Deposited to Checking: " << amount << ", New Balance: " << getBalance() << std::endl;
    }

    void withdraw(double amount) override {
        if (amount <= getBalance()) {
            setBalance(getBalance() - amount);
            std::cout << "Withdrawn from Checking: " << amount << ", New Balance: " << getBalance() << std::endl;
        } else {
            std::cout << "Insufficient funds in Checking Account." << std::endl;
        }
    }
};

#endif

