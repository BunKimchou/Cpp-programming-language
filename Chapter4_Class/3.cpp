#include <iostream>
using namespace std;

class CarClass{
    public:
     string model;
     int price;
     void introduction(string name){
        cout<<"Hello my name is : "<<name<<endl;
     }
};
int main(){
    CarClass toyota;

    toyota.introduction("Tola");

    toyota.model="Rize";
    toyota.price=20000;
    
    cout<<"car model is: "<<toyota.model<<endl;
    cout<<"The price is: "<<toyota.price<<endl;

}