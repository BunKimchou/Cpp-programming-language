#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > scores;

    vector<int>student1;
    student1.push_back(90);
    student1.push_back(85);
    student1.push_back(88);
    scores.push_back(student1);

    vector<int>student2;
    student2.push_back(78);
    student2.push_back(92);
    student2.push_back(80);
    scores.push_back(student2);

    for(int i=0; i<scores.size();i++){
        cout<<"Student"<<i+1<<":";
        for(int j=0;j<scores[i].size();j++){
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}