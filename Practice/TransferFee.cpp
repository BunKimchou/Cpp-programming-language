#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double calculateTransferFee(double amount) {
    if (amount < 100) {
        return 0;
    } else if (amount <= 500) {
        return amount * 0.005;
    } else {
        return amount * 0.01;
    }
}

int main() {
    string name;
    double transferAmount;

  
    cout << "Enter sender name: ";
    getline(cin, name);

    cout << "Enter transfer amount: ";
    cin >> transferAmount;

    
    double fee = calculateTransferFee(transferAmount);

    
    double totalDeduction = transferAmount + fee;

   
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Sender: " << name << endl;
    cout << "Transfer amount: $" << transferAmount << endl;
    cout << "Transfer fee: $" << fee << endl;
    cout << "Total deduction: $" << totalDeduction << endl;

    return 0;
}