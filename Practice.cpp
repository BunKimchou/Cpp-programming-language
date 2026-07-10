//Creating a program to calculate and display the speed of an animal 
#include <iostream>
#include <string>
using namespace std;

class AnimalClass {
public:
    string Name;
    float Distance, Time;

    AnimalClass(string N, float D, float T) {
        Name = N;
        Distance = D;
        Time = T;
    }

    float CalculateSpeed() {
        return Distance / Time;
    }

    void AnimalInfo() {
        cout << Name << " speed is: " << CalculateSpeed() << " km/h" << endl;
    }
};

int main() {
    AnimalClass Cow("Cow", 5, 5);
    Cow.AnimalInfo();

    AnimalClass Sheep("Sheep", 6, 10);
    Sheep.AnimalInfo();

    AnimalClass Bear("Bear",10,3);
    Bear.AnimalInfo();

    return 0;
}