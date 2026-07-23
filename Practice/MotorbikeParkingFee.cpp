#include <iostream>
#include <string>
using namespace std;

int main() {
    string plateNumber;
    int hours;

   
    cout << "Enter plate number: ";
    getline(cin, plateNumber);

    cout << "Enter parking hours: ";
    cin >> hours;

    
    int fee;
    if (hours >= 1 && hours <= 2) {
        fee = 1000;
    } else if (hours >= 3 && hours <= 5) {
        fee = 2000;
    } else if (hours > 5) {
        fee = 3000;
    } else {
        fee = 0; // handles 0 or negative hours
    }

    cout << endl;
    cout << "Plate number: " << plateNumber << endl;
    cout << "Parking duration: " << hours << " hours" << endl;

    if (fee == 0) {
        cout << "Invalid parking duration." << endl;
    } else {
        cout << "Parking fee: " << fee << " riel" << endl;
    }

    return 0;
}