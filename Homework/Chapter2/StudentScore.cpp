#include <iostream>
using namespace std;
int main (){
int Score;
cout<<"Enter your score: ";
cin>>Score;
if(Score>=85){
    cout<<"A";
}else if(Score>=70){
    cout<<"B";
}else if(Score>=60){
    cout<<"C";
}else if(Score>=50){
    cout<<"D";
}else{
    cout<<"F";
}
    return 0;
}