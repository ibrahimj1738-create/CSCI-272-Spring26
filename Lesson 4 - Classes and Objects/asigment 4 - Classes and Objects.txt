//
Name: Ibrahim Jahangir
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Basic Class Example
Date: 03/04/2026
//

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void setInfo() {
        brand = "Volkswagen";
        model = "Polo";
        year = 2012;
    }

    void startEngine() {
        cout << "Engine started." << endl;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.setInfo();
    car1.displayInfo();
    car1.startEngine();
    return 0;
}

//
Reflection:

1. What I understood:
My main takeaways are the private variables (brand, model, year), which store the data.
Private means they cannot be accessed directly from main().
The public functions (setInfo, displayInfo, startEngine) allow us to work with the private data.


2. Difficulties:
At first, I forgot to include <string>, and I got an error.
I also forgot that you can't access the brand on the code because it is private 
because this makes it now clear the difference between public and private 

3. Research:
I searched online about private vs public in C++. it said 
PartMeaning
class Car=creating blueprint
private=hidden data
brand/model/year=car properties
public=accessible functions
startEngine()=car action
I also checked how to properly print variables using cout.

4. AI Usage:
I used ChatGPT to check if my syntax was correct and to explain encapsulation in simple terms.

5. What I learned:
Classes organize data and functions together.
Private variables protect the data.
I realize the complexity of an atm  object and call its functions.
This example helped me understand the basic structure of OOP.
