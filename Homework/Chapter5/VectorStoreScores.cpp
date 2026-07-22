#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<double>> scores = {
        {50, 67, 87, 45},
        {98, 78, 80, 67},
        {58, 69, 95, 50}
    };
    
    for(int i = 0; i < scores.size(); i++){
        double sum = 0;
        cout << "Student " << (i + 1) << ", Scores= ";
        for(int j = 0; j < scores[i].size(); j++){
            cout << scores[i][j] << " ";
            sum += scores[i][j];
        }
        double average = sum / scores[i].size();
        cout << "Average: " << average << endl;
    }

    return 0;
}