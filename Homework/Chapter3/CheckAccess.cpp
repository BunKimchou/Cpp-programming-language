#include <iostream>
using namespace std;

int CheckAccess(int);

int main (){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    CheckAccess(age);
    return 0;
}

int CheckAccess(int age){
    if(age>=18){
        cout<<"Access Granted!";
    }else{
        cout<<"Access Denied!";
        exit(0);
    }
    return age;
}