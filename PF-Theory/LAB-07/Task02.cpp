#include <iostream>
using namespace std;
int triangularDots(int n);
int main()
{
    int n;
    cout << "Enter triangle number: ";
    cin >> n;

    cout << "Number of dots: " << triangularDots(n);
    return 0;
}
int triangularDots(int n)
{
    int dots = (n * (n + 1)) / 2;
    return dots;
}