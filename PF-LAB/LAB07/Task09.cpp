#include <iostream>
using namespace std;
void calculatePrice(int money, int year);
int main() 
{
    int money, year;
    cout<<"Enter money:";
    cin >> money;
    cout<<"Enter year:";
    cin>> year;
    calculatePrice(money, year);
    return 0;
}

void calculatePrice(int money, int year)
 {
    int age = 18;
    int spent = 0;

    for(int y = 1800; y <= year; y++)
    {
        if(y % 2 == 0) {spent = spent + 12000;} //even k lia
        else {spent = spent + 12000 + (50 ) * age;  } //for odd
        age++; // increase age each year
    }

    if(money >= spent) { cout << "Yes! He will live a carefree life and will have " << money - spent << " dollars left" << endl; }
     else { cout << "He will need " << spent - money << " dollars to survive." << endl;}
}

