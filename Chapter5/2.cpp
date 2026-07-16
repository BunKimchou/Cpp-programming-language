#include <iostream>
using namespace std;
void showValue(int[],int);

int main(){
    const int SIZE=8;
    int numbers[SIZE]={5,10,15,20,25,30,35,40};
    showValue(numbers, SIZE);
    return 0; 
}
void showValue(int num[],int size){
    for(int index=0;index<size;index++){
        cout<<num[index]<<" ";
    }
    cout<<endl;
}