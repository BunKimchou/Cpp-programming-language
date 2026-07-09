#include <iostream>
using namespace std;
int sum (int,int);

int main(){
    int sumResult;
    sumResult=sum(5,2);
    cout<< sumResult;
    return 0;
}
int sum (int num1,int num2){
int result;
result= num1+num2;
return result;
} 