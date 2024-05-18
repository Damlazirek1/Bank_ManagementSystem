#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(int id, int ownerId, double balance) : id(id), ownerId(ownerId), balance(balance) {}
    virtual ~Account() {}  // Sanal yýkýcý

    int getId() const { return id; }
    int getOwnerId() const { return ownerId; }
    double getBalance() const { return balance; }

    virtual void deposit(double amount) = 0;  // Saf sanal fonksiyon
    virtual void withdraw(double amount) = 0; // Saf sanal fonksiyon

protected:
    void setBalance(double newBalance) { balance = newBalance; }  // Protected setBalance fonksiyonu

private:
    int id;
    int ownerId;
    double balance;
};

#endif

