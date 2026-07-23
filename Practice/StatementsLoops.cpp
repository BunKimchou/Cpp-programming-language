#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double purchaseAmount;

    
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

   
    double discountRate;
    if (purchaseAmount >= 200000) {
        discountRate = 0.20;
    } else if (purchaseAmount >= 100000) {
        discountRate = 0.10;
    } else {
        discountRate = 0.0;
    }

    
    double discountAmount = purchaseAmount * discountRate;
    double finalPayment = purchaseAmount - discountAmount;

    
    cout << endl;
    cout << "Customer: " << name << endl;
    cout << "Original amount: " << purchaseAmount << " riel" << endl;
    cout << "Discount: " << discountAmount << " riel" << endl;
    cout << "Final payment: " << finalPayment << " riel" << endl;

    return 0;
}