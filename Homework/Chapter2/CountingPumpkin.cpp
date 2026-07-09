#include <iostream>
using namespace std;
int main(){
    int Pumpkin;
    int Total=0;
    for(int i=1;i<=300;i++){
        cout<<"Enter pumpkin loading onto truck: ";
        cin>>Pumpkin;
        Total+=Pumpkin;
        cout<<"The pumpkin has loaded= "<<Total<<endl;
        if(Total>=300){
          cout<<"!! Truck Full"<<endl;
          break;
      }
    }
    return 0;
}