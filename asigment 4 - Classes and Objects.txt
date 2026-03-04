//
Name: Ibrahim Jahangir
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Class with Conditional Statements
Date: 03/04/2026
//

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    char gender;

    void introduce() {
        cout << "Hello, my name is " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;

        if (gender == 'M') {
            cout << "I am male." << endl;
        }
        else if (gender == 'F') {
            cout << "I am female." << endl;
        }
        else {
            cout << "Gender not specified." << endl;
        }
    }
};

int main() {
    Person p1;
    p1.name = "Maksi";
    p1.age = 29;
    p1.gender = 'M';

    p1.introduce();
    return 0;
}

/*
Reflection:

1. What I understood:
 A class can contain variables and functions.
The introduce() function uses if statements to check gender.
 variables are public, you can change them directly in main().

2. Difficulties:
I accidentally used double quotes for 'M' and got an error.
I learned that char values must use single quotes.

3. Research:
 If and else statements work in C++.
 difference between char and string.

4. AI Usage:
to write the public function 
to connect it to the int main

5. What I learned:
Functions inside a class can use conditional logic.
 Objects store their own data.
 Public variables are easy to access but not always safe.
//
