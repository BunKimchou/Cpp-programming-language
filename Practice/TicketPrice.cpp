#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;


    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << endl;
        cout << "Invalid age! Age cannot be negative." << endl;
        return 0;
    }

    double price;
    if (age < 12) {
        price = 2.00;
    } else if (age <= 17) {
        price = 3.00;
    } else if (age <= 59) {
        price = 5.00;
    } else {
        price = 2.50;
    }

    cout << endl;
    cout << "Customer: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Ticket price: $" << price << endl;

    return 0;
}