#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>scores;
    scores.push_back(90);
    scores.push_back(100);
    scores.push_back(50);
    scores.push_back(65);
    scores.push_back(75);

    cout<<"Default: "<<endl;
    for(int i=0; i<scores.size();i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    scores[1]=95;
    
    cout<<"Modified: "<<endl;
    for(int i=0; i<scores.size();i++){
        cout<<scores[i]<<" ";
    }

    return 0;
}