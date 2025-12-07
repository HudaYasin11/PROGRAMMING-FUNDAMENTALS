#include<iostream>
using namespace std;
int main()
{
    string pin;
    cout << "Enter 4-digit PIN: ";
    cin >> pin;
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step",
                         "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    if (pin.length() != 4) {
        cout << "Invalid input." << endl;
        return 0;
    }
    for (char c : pin) {
        if (c < '0' || c > '9') {
            cout << "Invalid input." << endl;
            return 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        int digit = pin[i] - '0';        
        int moveIndex = (digit + i) % 10; 
        cout << MOVES[moveIndex];
        if (i != 3) cout << ", ";        
    }

    return 0;
}





