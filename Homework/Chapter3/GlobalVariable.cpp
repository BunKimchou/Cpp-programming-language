#include <iostream>
using namespace std;

void ModifyGlobal();
void ShowLocal();
int GlobalCount=10;

int main(){
    ModifyGlobal();
    ShowLocal();
    return 0;
}

void ModifyGlobal(){
    GlobalCount=10*2;
    cout<<"The modifyGlobal is: "<<GlobalCount<<endl;
}

void ShowLocal(){
    GlobalCount=5;
    cout<<"The showLocal is: "<<GlobalCount;
}