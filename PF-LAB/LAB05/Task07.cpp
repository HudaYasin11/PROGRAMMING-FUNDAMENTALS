#include <iostream>
using namespace std;

bool Symmetrical(int number);
int main()
{
     int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    Symmetrical(num); 
    return 0;
}
bool Symmetrical(int number)
{
    int firstDigit = number / 100;
    int lastDigit = number % 10;

    if (firstDigit == lastDigit)
    {
        cout << "The number is symmetrical." << endl;
        return true;
    }
    else
    {
        cout << "The number is not symmetrical." << endl;
        return false;
    }
}