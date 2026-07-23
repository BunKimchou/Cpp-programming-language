#include <iostream>
using namespace std;

int main() {
    const int correctPIN = 2026;
    const int maxAttempts = 3;
    int enteredPIN;
    bool loginSuccess = false;

    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
        cout << "Enter PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == correctPIN) {
            cout << "Login successful." << endl;
            loginSuccess = true;
            break;
        } else {
            int remainingAttempts = maxAttempts - attempt;
            if (remainingAttempts > 0) {
                cout << "Incorrect PIN. You have " << remainingAttempts << " attempts remaining." << endl;
                cout << endl;
            }
        }
    }

    // Lock account if all attempts failed
    if (!loginSuccess) {
        cout << "Account locked. Too many incorrect attempts." << endl;
    }

    return 0;
}