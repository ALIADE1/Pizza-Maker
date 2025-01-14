#include <iostream>
using namespace std;

void MakeDough() {
    cout << "Making Dough..." << endl;
}

void BakePizza() {
    cout << "Baking Pizza..." << endl;
}

void AddToppings(const string& topping) {
    cout << "Adding " << topping << " Toppings..." << endl;
}

void MakePizza(const string& type) {
    MakeDough();
    AddToppings(type);
    BakePizza();
    cout << type << " Pizza is Done!" << endl;
}

int main() {
    int choice;
    cout << "Choose 1 for Beef, 2 for Cheese, 3 for Chicken: ";
    cin >> choice;

    switch (choice) {
    case 1:
        MakePizza("Beef");
        break;
    case 2:
        MakePizza("Cheese");
        break;
    case 3:
        MakePizza("Chicken");
        break;
    default:
        cout << "Invalid Choice!" << endl;
        break;
    }

    return 0;
}
