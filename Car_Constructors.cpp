/*
Name: Your Name
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constructors Example
Date: 02/15/2026
*/

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Default constructor
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }

    // Parameterized constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Copy constructor
    Car(const Car &other) {
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    void display() {
        cout << brand << " " << model << " " << year << endl;
    }
};

int main() {
    Car car1; // default
    Car car2("Tesla", "X", 2022); // parameterized
    Car car3(car2); // copy

    car1.display();
    car2.display();
    car3.display();

    return 0;
}

/*
Reflection:

1. What I understood:
This example helped me understand constructors.
The default constructor runs when no values are provided.
The parameterized constructor allows us to pass values when creating the object.
The copy constructor makes a new object using another object.
I learned that constructors have the same name as the class and no return type.

2. Difficulties:
I was confused at first about when the copy constructor runs.
I also forgot that constructors do not have a return type.

3. Research:
I searched online about the difference between default and parameterized constructors.
I also looked up examples of copy constructors.

4. AI Usage:
I used ChatGPT to explain when each constructor is called.

5. What I learned:
I learned how object initialization works.
I learned that constructors automatically run when an object is created.
I learned that copy constructors copy the data from another object.
This helped me understand object creation better.
*/
