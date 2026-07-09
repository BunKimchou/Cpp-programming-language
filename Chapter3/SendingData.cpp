#include <iostream>
using namespace std;
//Function Prototypes
void displayValue(int,bool);

int main(){
    cout<<"I am passing 5 to displayValue"<<endl;
    displayValue(5,true);
    cout<<"Now I am back in main"<<endl;
    return 0;
}

void displayValue(int num, bool status){
    cout<<"The value is "<<num<<endl;
    cout<<"The status is "<<status<<endl;
}