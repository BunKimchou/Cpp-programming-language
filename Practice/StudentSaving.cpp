#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double dailySaving;

   
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter daily saving amount: ";
    cin >> dailySaving;

   
    double totalSavings = 0;

    cout << endl;
    for (int day = 1; day <= 30; day++) {
        totalSavings += dailySaving;
        cout << "Day " << day << ": " << totalSavings << " riel" << endl;
    }


    cout << endl;
    cout << name << " saved a total of " << totalSavings << " riel." << endl;

    return 0;
}