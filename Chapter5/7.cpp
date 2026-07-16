#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>scores={
        {90,85,88},
        {78,92,80}
    };

for (int i=0;i<scores.size();i++){
    cout<<"Student"<<i+1<<":";
    for(int j=0;j<scores[i].size();j++){
        cout<<scores[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}