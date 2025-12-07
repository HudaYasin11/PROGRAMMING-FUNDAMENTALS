#include <iostream>
using namespace std;
bool doesBrickFit(int a, int b, int c, int w, int h);
int main() 
{
    int a, b, c, w, h;
    cout << "Enter height of brick: ";
    cin >> a;
    cout << "Enter width of brick: ";
    cin >> b;
    cout << "Enter depth of brick: ";
    cin >> c;
    cout << "Enter height of hole: ";
    cin >> h;
    cout << "Enter width of hole: ";
    cin >> w;

    bool result = doesBrickFit(a, b, c, w, h);
cout<<" "<<result;
    return 0;
}
bool doesBrickFit(int a, int b, int c, int w, int h) {
    if ((a <= w && b <= h) || (a <= h && b <= w)) return true;
    if ((a <= w && c <= h) || (a <= h && c <= w)) return true;
    if ((b <= w && c <= h) || (b <= h && c <= w)) return true;
    return false;
}