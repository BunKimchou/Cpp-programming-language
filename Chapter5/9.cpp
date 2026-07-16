#include <iostream>
using namespace std;
int main() {
int numStudents = 2;
int numSubjects = 3;
string names[numStudents];
int scores[numStudents][numSubjects];
for (int i = 0; i < numStudents; i++) {
cout << "Enter name for Student " << i + 1 << ": ";
cin >> names[i];
cout << "Enter " << numSubjects << " scores for " 
<< names[i] << ":\n";
for (int j = 0; j < numSubjects; j++) {
cout << "  Subject " << j + 1 << ": ";
cin >> scores[i][j];
}
}
cout << "\nStudent Scores:\n";
for (int i = 0; i < numStudents; i++) {
cout << names[i] << ": ";
for (int j = 0; j < numSubjects; j++) {
cout << scores[i][j] << " ";
}
cout << endl;
}
return 0;
}