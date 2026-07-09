#include <iostream>
#include <string>
using namespace std;

int PrintMessage(string message="Hello from c++");

int main (){
    PrintMessage();
    PrintMessage("welcome to function practice");
    return 0;
}

int PrintMessage(string message){
    cout<<message<<endl;
}