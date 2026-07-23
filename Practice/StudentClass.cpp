#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentID;
    double score;

public:
    // Constructor
    Student(string studentName, string id, double studentScore) {
        name = studentName;
        studentID = id;

      
        if (studentScore < 0 || studentScore > 100) {
            cout << "Invalid score! Score must be between 0 and 100. Setting score to 0." << endl;
            score = 0;
        } else {
            score = studentScore;
        }
    }

  
    char calculateGrade() {
        if (score >= 90) {
            return 'A';
        } else if (score >= 80) {
            return 'B';
        } else if (score >= 70) {
            return 'C';
        } else if (score >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

   
    bool isPassed() {
        return score >= 60;
    }

    
    void displayStudent() {
        cout << "Student: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Status: " << (isPassed() ? "Passed" : "Failed") << endl;
    }
};

int main() {
    string name, id;
    double score;

    
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    getline(cin, id);

    cout << "Enter score: ";
    cin >> score;

    while (score < 0 || score > 100) {
        cout << "Invalid score! Please enter a value between 0 and 100: ";
        cin >> score;
    }

   
    Student student1(name, id, score);
    cout << endl;
    student1.displayStudent();

    return 0;
}