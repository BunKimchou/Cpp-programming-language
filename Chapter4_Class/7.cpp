#include<iostream>
using namespace std;

class MyClass{
    public:
      MyClass(string name){
        cout<<"Hello, My name is: "<<name<<endl;
      }
};
int main(){
    MyClass myObj1("Tola");
    MyClass myObj2("Sok");
return 0;
}