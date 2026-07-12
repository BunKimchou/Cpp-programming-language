#include <iostream>
#include <string>
using namespace std;
class Student{

    private:
    string name;
    int age;
    float score;

    public:
    Student(){
        name="unknown";
        age=0;
        score=0.00;
    }
    Student(string n,int a,float s){
        name=n;
        age=a;
        score=s;
    }
    void Display(){
        cout<<"==========Student's Information=========="<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Age: "<<age<<" Year old"<<endl;
        cout<<"Score: "<<score<<endl;
    }
};
int main(){
    Student s1;
    s1.Display();
    Student s2("A",18,85.6);
    s2.Display();
    Student s3("B",20,82.34);
    s3.Display();
}