#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int numbers[6]={10,20,30,40,50,60};
    printArray(numbers,6);
    return 0;
}