/**
 * Program to show the use of classes.
 */

#include <iostream>
#include <cstring>
using namespace std;

class Person {

    string name;
    int age;

public:

    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();

};

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

string Person::getName() {
    return this->name;
}

int Person::getAge() {
    return this->age;
}

int main() {
    Person p;
    string name;
    int age;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    p.setName(name);
    p.setAge(age);

    cout << "Name is " << p.getName() << endl
         << "Age is " << p.getAge() << endl;

    return 0;
}
