#include<iostream>
using namespace std;

int calculateGCD(int a, int b);
int calculateLCM(int a, int b, int gcd);

int main()
{
    int value1, value2;
    cout << "Enter 1st number: ";
    cin >> value1;
    cout << "Enter 2nd number: ";
    cin >> value2;

    int gcd = calculateGCD(value1, value2);
    int lcm = calculateLCM(value1, value2, gcd);

    cout << "GCD = " << gcd << ", LCM = " << lcm << endl;

    return 0;
}

int calculateGCD(int a, int b)
{
    while (b != 0)
    {
        int value = b;                    //keep replacing a with b and b with remainder of a and b When b becomes zero, a is GCD.                          
        b = a % b;
        a = value ;
    }
    return a;
}

int calculateLCM(int a, int b, int gcd)
{
    return (a * b) / gcd;                // LCM X GCD = A X B ----> LCM = A X B / GCD
}
