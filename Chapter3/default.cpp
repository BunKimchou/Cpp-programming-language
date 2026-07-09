#include <iostream>
using namespace std;

int sum(int=30,int=40);

int main(){
    int a;
    a=sum(2,3);
    cout<<a<<endl;
    return 0;
}
int sum(int n1,int n2){
    return n1+n2;
}