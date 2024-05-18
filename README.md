# Bank Account Management System

## About the Project

This project is a bank account management system. The system is designed to manage customer and account information, perform deposit and withdrawal transactions. The project is developed using object-oriented programming (OOP) principles.

## Requirements

To run the project, the following software must be installed on your system:
- Git
- G++ (or any C++ compiler)

## Setup and Running

### 1. Clone the Repository

Clone the GitHub repository to your local machine:

git clone https://github.com/Damlazirek1/Bank_ManagementSystem.git
cd BankAccountManagement
2. Compile the Source Files
Use G++ to compile the project:
g++ main.cpp -o BankManagement
3. Run the Program
After compiling, run the program:

./BankManagement
Using the Program
When the program runs, a menu will be displayed to the user with various options. The user can select from these options to perform different operations.

Menu Options
Create New Account:

The user enters the customer ID and initial deposit amount.
The user selects the account type (1: Checking, 2: Savings).
A new account is created and added to the system.
Deposit Money:

The user enters the account ID and the amount to deposit.
The specified amount is deposited into the account.
Withdraw Money:

The user enters the account ID and the amount to withdraw.
The specified amount is withdrawn from the account (if sufficient balance is available).
Display Account Information:

The user enters the account ID.
The specified account's information (ID and balance) is displayed.
Display All Accounts:

Information for all accounts in the system is displayed.
Exit:

The program terminates.
Continue Prompt
After each operation, the user is asked if they want to continue. The user can respond with "yes" or "no".


1. Open Terminal or Command Prompt and navigate to your project folder:

cd /path/to/your/project/folder
Use the following Git commands to add the README file and other project files to your GitHub repository:

# Initialize the local repository
git init

# Add all files to the repository
git add .

# Commit the changes
git commit -m "Add project files and README"

# Add the remote repository
git remote add origin https://github.com/Damlazirek1/Bank_ManagementSystem.git

# Push the changes to GitHub
git push -u origin master
