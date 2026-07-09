#include <iostream>
using namespace std;

class CarClass{
    public:
        string model;
        int price;
};
int main(){
    CarClass toyota;

    toyota.model="Rize";
    toyota.price= 20000;
    
    cout<<"Car Model is: "<<toyota.model<<endl;
    cout<<"Car Price is: "<<toyota.price<<endl;
    
    return 0;
}