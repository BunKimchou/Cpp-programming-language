#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double usage[7];
    double totalUsage = 0;

    cout << "Enter student name: ";
    getline(cin, name);

    
    for (int day = 1; day <= 7; day++) {
        double dayUsage;
        cout << "Day " << day << " usage: ";
        cin >> dayUsage;

        
        while (dayUsage < 0) {
            cout << "Invalid! Usage cannot be negative. Day " << day << " usage: ";
            cin >> dayUsage;
        }

        usage[day - 1] = dayUsage;
        totalUsage += dayUsage;
    }

   
    double averageUsage = totalUsage / 7;

    string status;
    if (averageUsage < 60) {
        status = "Healthy usage";
    } else if (averageUsage <= 120) {
        status = "Moderate usage";
    } else {
        status = "High screen time";
    }


    cout << endl;
    cout << "Student: " << name << endl;
    cout << "Total usage: " << totalUsage << " minutes" << endl;
    cout << "Average usage: " << averageUsage << " minutes" << endl;
    cout << "Status: " << status << endl;

    return 0;
}