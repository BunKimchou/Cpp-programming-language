#include <iostream>
#include <string>
using namespace std;
class Book{
    string title;
    string author;
    double price;
    public:
        Book(){
            cout<<"Unknown"<<endl;
        }
        Book(string t,string a,double p){
            title=t;
            author=a;
            price=p;
        }
        void DisplayInfo(){
            cout<<"==========Book's Information=========="<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
        }

};
int main(){
    string t,a;
    double p;

        cout<<"Enter Title: ";
        getline(cin,t);
        cout<<"Enter Author: ";
        getline(cin,a);
        cout<<"Enter Price: ";
        cin>>p;
        
    Book A1(t,a,p);
    A1.DisplayInfo();
}