#include<iostream>
using namespace std;
class MyClass{//The class
    public://Access specifier
    MyClass(){//Constructor
        cout<<"Hello world";
    }
};
int main(){
    MyClass myObj;//create an object of Myclass (call the constructor)
    return 0;


}