#include <iostream>
using namespace std;
class MySibling{
    public:
     MySibling(string name,string occupation){
      cout<<name<<" is a: "<<occupation<<endl;
     }
};
int main(){
    MySibling sibling1("Tola","Teacher");
    MySibling sibling2("Sok","Doctor");
    return 0;
}