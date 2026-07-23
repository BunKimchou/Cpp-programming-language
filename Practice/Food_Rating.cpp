//cambodia food names and ratings
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;


double calculateAverageRating(vector<double> ratings) {
    double total = 0;
    for (int i = 0; i < ratings.size(); i++) {
        total += ratings[i];
    }
    return total / ratings.size();
}

int findHighestRatedFood(vector<double> ratings) {
    int highestIndex = 0;
    for (int i = 1; i < ratings.size(); i++) {
        if (ratings[i] > ratings[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}


void displayFoods(vector<string> foodNames, vector<double> ratings) {
    for (int i = 0; i < foodNames.size(); i++) {
        cout << foodNames[i] << ": " << ratings[i] << endl;
    }
}

int main() {
    vector<string> foodNames = {
        "Bai Sach Chrouk",
        "Fish Amok",
        "Nom Banh Chok",
        "Samlor Korko",
        "Lok Lak"
    };

    vector<double> ratings;


    for (int i = 0; i < foodNames.size(); i++) {
        double rating;
        cout << "Enter rating for " << foodNames[i] << ": ";
        cin >> rating;

        while (rating < 0 || rating > 5) {
            cout << "Invalid! Rating must be between 0 and 5. Enter rating for " << foodNames[i] << ": ";
            cin >> rating;
        }

        ratings.push_back(rating);
    }


    cout << endl;
    displayFoods(foodNames, ratings);

    double average = calculateAverageRating(ratings);
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Average rating: " << average << endl;

    // Find and display the highest-rated food
    int highestIndex = findHighestRatedFood(ratings);
    cout << "Highest-rated food: " << foodNames[highestIndex] << endl;

    // Display foods rated 4.0 or higher
    cout << endl;
    cout << "Foods rated 4.0 or higher:" << endl;
    for (int i = 0; i < foodNames.size(); i++) {
        if (ratings[i] >= 4.0) {
            cout << foodNames[i] << ": " << ratings[i] << endl;
        }
    }

    return 0;
}