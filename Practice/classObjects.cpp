//FoodOrder 
#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    string customerName;
    string foodName;
    int quantity;
    double pricePerItem;

public:
    // Constructor
    FoodOrder(string customer, string food, int orderQuantity, double itemPrice) {
        customerName = customer;
        foodName = food;
        quantity = orderQuantity;
        pricePerItem = itemPrice;
    }

   
    double calculateTotal() {
        return quantity * pricePerItem;
    }


    void displayOrder() {
        cout << "Customer: " << customerName << endl;
        cout << "Food: " << foodName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per item: " << pricePerItem << " riel" << endl;
        cout << "Total: " << calculateTotal() << " riel" << endl;
    }
};

int main() {
  
    FoodOrder order1("BCZin", "Lok Lak", 2, 12000);

   
    order1.displayOrder();

    return 0;
}