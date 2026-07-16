#include<iostream>
#include<vector>
using namespace std;

int main(){
    int numStudents=2;
    int numSubjects=3;
    vector<string>names;
    vector<vector<int>>scores;
    for(int i=0;i<numStudents;i++){
        string name;
        cout<<"Enter name for student "<<i+1<<":";
        cin>>name;
        names.push_back(name);
        vector<int>studentScores;
        cout<<"Enter 3 scores for "<<name<<":\n";
        for(int j=0;j<numSubjects;j++){
            int score;
            cout<<"Subject"<<j+1<<":";
            cin>>score;
            studentScores.push_back(score);
        }
        scores.push_back(studentScores);
    }
    cout<<"Student scores:\n";
    for(int i=0;i<numStudents;i++){
        cout<<names[i]<<":";
        for(int j=0;j<numSubjects;j++){
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}