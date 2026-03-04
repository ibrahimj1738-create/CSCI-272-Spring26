/*
Name: Your Name
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructor Example
Date: 02/15/2026
*/

#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car created." << endl;
    }

    ~Car() {
        cout << "Car destroyed." << endl;
    }
};

int main() {
    Car car1;
    return 0;
}

/*
Reflection:

1. What I understood:
I learned that a destructor runs automatically when an object is destroyed.
The destructor has the same name as the class but with a ~ symbol.
It does not have a return type and cannot have parameters.

2. Difficulties:
I did not understand at first when the destructor runs.
After testing, I saw that it runs when the program ends.

3. Research:
I searched about object lifetime in C++.

4. AI Usage:
I used ChatGPT to understand the order of constructor and destructor calls.

5. What I learned:
I learned that destructors are important for cleaning up resources.
Even though this example is simple, in real programs destructors help free memory.
I now understand the full lifecycle of an object: creation and destruction.
*/
