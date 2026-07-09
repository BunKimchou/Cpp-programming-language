#include <iostream>
#include <string>
using namespace std;

void DisplayFullName(string LastName,string FirstName);

int main (){
    DisplayFullName("Kimchou","Bun");
    return 0;
}
void DisplayFullName(string LastName,string FirstName){
    cout<<"My Full name is: "<<LastName<<FirstName;

}