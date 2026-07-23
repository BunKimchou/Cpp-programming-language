#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double tiktok, facebook, instagram;

   
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter TikTok usage in minutes: ";
    cin >> tiktok;

    cout << "Enter Facebook usage in minutes: ";
    cin >> facebook;

    cout << "Enter Instagram usage in minutes: ";
    cin >> instagram;

    double dailyTotal = tiktok + facebook + instagram;
    double weeklyTotal = dailyTotal * 7;
    double weeklyHours = weeklyTotal / 60;

    double roundedHours = (int)(weeklyHours * 100 + 0.5) / 100.0;


    cout << endl;
    cout << "Student: " << name << endl;
    cout << "Daily social media usage: " << dailyTotal << " minutes" << endl;
    cout << "Weekly social media usage: " << weeklyTotal << " minutes" << endl;
    cout << "Weekly social media usage: " << roundedHours << " hours" << endl;

    return 0;
}