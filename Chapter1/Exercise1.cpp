#include <iostream>
using namespace std;
int main (){
    int age,day;
    string Name;
    cout<<"Enter your name: ";
    getline(cin,Name);
    cout<<"Enter your age: ";
    cin>>age;
    day=age*365;
    cout<<"Hello,"<<Name<<endl;
    cout<<"You've been born: "<<day;
    return 0;
}