#include <iostream>
#include "Bank.h"
#include "Customer.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

void displayMenu();
void performAction(Bank& bank, int choice);
bool askToContinue();

int main() {
    Bank myBank;
    int choice;

    do {
        displayMenu();
        std::cout << "Please enter your choice: ";
        std::cin >> choice;

        performAction(myBank, choice);
    } while (askToContinue());

    return 0;
}

void displayMenu() {
    std::cout << "\nBank Account Management System" << std::endl;
    std::cout << "1. Create new account" << std::endl;
    std::cout << "2. Deposit money" << std::endl;
    std::cout << "3. Withdraw money" << std::endl;
    std::cout << "4. Display account information" << std::endl;
    std::cout << "5. Display all accounts" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

void performAction(Bank& bank, int choice) {
    int id;
    double amount;
    switch (choice) {
        case 1: {
            int accountType;
            std::cout << "Enter customer ID for new account: ";
            std::cin >> id;
            std::cout << "Enter initial deposit amount: ";
            std::cin >> amount;
            std::cout << "Enter account type (1 for Checking, 2 for Savings): ";
            std::cin >> accountType;
            if (accountType == 1) {
                bank.createAccount(new CheckingAccount(id, id, amount));
            } else if (accountType == 2) {
                bank.createAccount(new SavingsAccount(id, id, amount));
            } else {
                std::cout << "Invalid account type." << std::endl;
            }
            std::cout << "New account created successfully!" << std::endl;
            break;
        }
        case 2: {
            std::cout << "Enter account ID for deposit: ";
            std::cin >> id;
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            if (bank.depositToAccount(id, amount)) {
                std::cout << "Amount deposited successfully!" << std::endl;
            } else {
                std::cout << "Deposit failed. Check account details." << std::endl;
            }
            break;
        }
        case 3: {
            std::cout << "Enter account ID for withdrawal: ";
            std::cin >> id;
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            if (bank.withdrawFromAccount(id, amount)) {
                std::cout << "Amount withdrawn successfully!" << std::endl;
            } else {
                std::cout << "Withdrawal failed. Check account details and balance." << std::endl;
            }
            break;
        }
        case 4: {
            std::cout << "Enter account ID to display information: ";
            std::cin >> id;
            Account* acc = bank.findAccount(id);
            if (acc != NULL) {
                std::cout << "Account ID: " << acc->getId() << ", Balance: " << acc->getBalance() << std::endl;
            } else {
                std::cout << "Account not found." << std::endl;
            }
            break;
        }
        case 5: {
            bank.displayAllAccounts();
            break;
        }
        case 0:
            std::cout << "Exiting the system..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

bool askToContinue() {
    std::string response;
    std::cout << "Do you want to continue? (yes or no): ";
    std::cin >> response;
    return response == "yes" || response == "Yes";
}
