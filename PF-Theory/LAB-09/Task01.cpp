#include <iostream>
#include <string>
using namespace std;
int main() {
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};

    string selectedFruit;
    float quantity;

    cout << "Enter the name of the fruit: ";
    cin >> selectedFruit;
    cout << "Enter the quantity in kgs: ";
    cin >> quantity;

    bool found = false;
    float totalBill = 0;
    for (int i = 0; i < 4; i++) {
        if (fruit[i] == selectedFruit) {
            totalBill = price[i] * quantity;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Total bill: " << totalBill << " Rs" << endl;
    } else {
        cout << "Fruit not found!" << endl;
    }

    return 0;
}
