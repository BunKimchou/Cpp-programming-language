#include <iostream>
#include <string>
using namespace std;


double calculateDeliveryFee(double distance, bool isRainy) {
    const double baseFee = 4000;
    const double distanceFeeRate = 1000;
    const double rainSurcharge = 2000;

    double fee = baseFee + (distance * distanceFeeRate);

    if (isRainy) {
        fee += rainSurcharge;
    }

    return fee;
}

int main() {
    string name;
    double distance;
    int rainInput;


    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter delivery distance: ";
    cin >> distance;

    cout << "Is it raining? 1 for Yes, 0 for No: ";
    cin >> rainInput;

    bool isRainy = (rainInput == 1);

  
    double deliveryFee = calculateDeliveryFee(distance, isRainy);

    cout << endl;
    cout << "Customer: " << name << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Weather: " << (isRainy ? "Rainy" : "Not Rainy") << endl;
    cout << "Delivery fee: " << deliveryFee << " riel" << endl;

    return 0;
}