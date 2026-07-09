#include <iostream>
using namespace std;

void showsum(int,int,int);

int main(){
    int value1,value2,value3;
    cout<<"Enter three integers and I will display ";
    cout<<"their sum: ";
    cin>>value1>>value2>>value3;
    showsum(value1,value2,value3);
    return 0;
    
}

void showsum( int num1,int num2,int num3){
    cout<<"sum= "<<(num1+num2+num3)<<endl;
}