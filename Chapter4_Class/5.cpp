#include <iostream>
using namespace std;

class CarClass{
    public:
     string model;
     int price;
     void introduction(string);
};
     void CarClass::introduction(string name){
        cout<<"Hello! My name is: "<<name<<endl;
     }
int main(){
    CarClass toyota;

    toyota.introduction("Tola");
    toyota.model="Rize";
    toyota.price=20000;
    cout<<"Car model is: "<<toyota.model<<endl;
    cout<<"The price is: "<<toyota.price;
    return 0;
}