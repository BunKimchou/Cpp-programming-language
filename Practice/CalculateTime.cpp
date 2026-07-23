#include <iostream>
using namespace std;
int main(){
    string name;
    float hours,weeklyM,weeklyH;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter study hours per day: ";
    cin>>hours;

    weeklyH=hours*7;
    weeklyM=hours*7*60;

    cout<<"Student: "<<name<<endl;
    cout<<"Daily study time: "<<hours<<endl;
    cout<<"Weekly study time: "<<weeklyH<<" hours"<<endl;
    cout<<"Weekly study time: "<<weeklyM<<" Minutes"<<endl;

    return 0;
}