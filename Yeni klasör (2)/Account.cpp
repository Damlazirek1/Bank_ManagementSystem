#include "Account.h"

Account::Account(int id, int ownerId, double balance) : id(id), ownerId(ownerId), balance(balance) {}

int Account::getId() const {
    return id;
}

int Account::getOwnerId() const {
    return ownerId;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    }
    // Optionally, handle the case where there is not enough balance.
}
