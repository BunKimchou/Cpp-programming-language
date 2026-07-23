#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate total of all expenses
double calculateTotal(double expenses[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += expenses[i];
    }
    return total;
}

// Function to calculate average expense
double calculateAverage(double expenses[], int size) {
    return calculateTotal(expenses, size) / size;
}

// Function to find the highest expense
double findHighest(double expenses[], int size) {
    double highest = expenses[0];
    for (int i = 1; i < size; i++) {
        if (expenses[i] > highest) {
            highest = expenses[i];
        }
    }
    return highest;
}

// Function to find the lowest expense
double findLowest(double expenses[], int size) {
    double lowest = expenses[0];
    for (int i = 1; i < size; i++) {
        if (expenses[i] < lowest) {
            lowest = expenses[i];
        }
    }
    return lowest;
}

int main() {
    const int size = 7;
    double expenses[size];

    // Get input for 7 days, rejecting negative values
    for (int i = 0; i < size; i++) {
        double amount;
        cout << "Day " << (i + 1) << " expense: ";
        cin >> amount;

        while (amount < 0) {
            cout << "Invalid! Expense cannot be negative. Day " << (i + 1) << " expense: ";
            cin >> amount;
        }

        expenses[i] = amount;
    }

    // Calculate results using the functions
    double total = calculateTotal(expenses, size);
    double average = calculateAverage(expenses, size);
    double highest = findHighest(expenses, size);
    double lowest = findLowest(expenses, size);

   
    cout << endl;
    cout << "Total expense: " << total << " riel" << endl;
    cout << fixed << setprecision(2);
    cout << "Average expense: " << average << " riel" << endl;
    cout << defaultfloat;
    cout << "Highest expense: " << highest << " riel" << endl;
    cout << "Lowest expense: " << lowest << " riel" << endl;

    return 0;
}
