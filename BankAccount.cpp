/*
Name: Your Name
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Encapsulation Example
Date: 02/15/2026
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

1. What I understood:
This example helped me understand encapsulation.
The balance variable is private, so it cannot be changed directly from main().
The deposit and withdraw functions control how balance changes.
This protects the data from being modified incorrectly.

2. Difficulties:
I forgot to initialize balance at first and got random values.
I learned that variables must be initialized.

3. Research:
I reviewed how private variables work.
I also searched how to compare double values properly.

4. AI Usage:
I used ChatGPT to review my code and make sure it compiles.

5. What I learned:
I learned why encapsulation is important.
I learned that private variables increase security.
I learned that public functions act as a safe way to access data.
This example helped me understand access specifiers better.
*/
