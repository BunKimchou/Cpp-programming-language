#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>scores={90,100,50,65,75};

    scores.pop_back();

    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    scores.clear();

    cout<<"Size of vector after clearing: "<<scores.size()<<endl;
    
    //The code below will not show after we clear all elements
      for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;


    return 0;
}