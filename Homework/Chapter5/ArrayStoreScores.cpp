#include <iostream>
using namespace std;
int main(){
    double scores[3][4]={{50,67,87,45},
                         {98,78,80,67},
                         {58,69,95,50}
    };
    
    for(int i=0; i<3; i++){

        double sum=0;
        cout<<"Student "<<(i+1)<<", Scores= ";
        for(int j=0;j<4;j++){
            cout<<scores[i][j]<<" ";
            sum+=scores[i][j];
        }
        double average= sum/4.0;
        cout<<"Average: "<<average<<endl;
    }

    return 0;
}