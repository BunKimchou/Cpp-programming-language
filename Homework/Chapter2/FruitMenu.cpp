#include <iostream>
#include <string>
using namespace std;
int main (){
    int Option;
    int Quantity;
    float Total;
for(int n=0;n<=100;n++){
    cout<<"\033[34m=============== WELCOME ===============\033[0m"<<endl;
    cout<<"choose the options below: "<<endl;
    cout<<"1.\033[35mMango\033[0m"<<endl;
    cout<<"2.\033[33mBanana\033[0m"<<endl;
    cout<<"3.\033[32mDurian\033[0m"<<endl;
    cout<<"4.\033[30mExit\033[0m"<<endl;
    cout<<"Enter your option: ";
    cin>>Option;
    cout<<"\033[34m=====================================\033[0m"<<endl;

    if(Option==1){
        cout<<"Enter quantity: ";
        cin>>Quantity;
        Total=1.67*Quantity;
        cout<<"You purchased "<<Quantity<<" \033[35mMangoes\033[0m"<<endl;
        cout<<"\033[31mTotal\033[0m= "<<Total<<" \033[32m$\033[0m"<<endl;
    }
    if(Option==2){
        cout<<"Enter quantity: ";
        cin>>Quantity;
        Total=2.68*Quantity;
        cout<<"You purchased "<<Quantity<<" \033[33mBanana\033[0m"<<endl;
        cout<<"\033[31mTotal\033[0m= "<<Total<<" \033[32m$\033[0m"<<endl;
    }
    if(Option==3){
        cout<<"Enter quantity: ";
        cin>>Quantity;
        Total=18.50*Quantity;
        cout<<"You purchased "<<Quantity<<" \033[32mDurians\033[0m"<<endl;
        cout<<"\033[31mTotal\033[0m= "<<Total<<" \033[32m$\033[0m"<<endl;
    }
    if(Option==4){
        cout<<"Thank you !!!";
        break;
    }
}
    return 0;
}