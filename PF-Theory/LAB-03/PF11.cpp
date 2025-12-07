#include <iostream>
using namespace std;
main() 
{
int age, moves;
cout << "Enter person's age: ";
cin >> age;
cout << "Enter number of times they've moved: ";
cin >> moves;
int averageDuration = age / (moves + 1);
cout << "Average duration in a single house: " << averageDuration << endl;
}