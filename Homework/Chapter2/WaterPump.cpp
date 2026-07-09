#include <iostream>
using namespace std;
int main (){
    int Tank=100;
    for(int i=0;i<10;i++){
        cout<<"Enter minutes you used for the water pump: ";
        cin>>i;
        while(i==1){
             Tank-=10;
            cout<<"Tank= "<<Tank<<"L"<<endl;
            break;
        }
              if(Tank==0){
                  cout<<"Tank is empty !!";
                  break;
                  }
    }
    return 0;
}