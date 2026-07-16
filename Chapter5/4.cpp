#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    vector<string>names(5);
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.pop_back();
    for(int i=0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
