#include <iostream>
using namespace std;
class CarClass{
    public:
     string model;
     int price;
     void introduction(string name){
        cout<<"Hello My name is: "<<name<<endl;
     }
    };
     int main (){
        CarClass toyota;

        toyota.introduction("Tola");

        toyota.model="Rize";
        toyota.price=20000;

        cout<<"Car Model is: "<<toyota.model<<endl;
        cout<<"The price is: "<<toyota.price<<endl;

        CarClass mazda;

        mazda.introduction("Sok");

        mazda.model="CX-3";
        mazda.price=30000;
        
        cout<<"Car model is: "<<mazda.model<<endl;
        cout<<"The price is: "<<mazda.price<<endl;
        return 0;

     }
