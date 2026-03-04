/*
Name: Ibrahim Jahangir 
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Encapsulation with Deposit and Withdraw
Date: 03/04/2026
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance = balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
        }
        else {
            cout << "Not enough money." << endl;
        }
    }

    void showBalance() {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();
    return 0;
}

/*
Reflection:

This example helped me understand controlled access to private data.
The balance variable cannot be changed directly from main().
Only deposit and withdraw functions can modify it.

At first, I forgot to initialize balance,
and I got incorrect output.
After fixing it, the program worked correctly.

I reviewed examples online and asked ChatGPT to explain
why private variables improve security in programs.

From this assignment, I learned how encapsulation protects data
and how public functions provide controlled access.
*/
