#include <iostream>
using namespace std;

int digitSum(int num);

int main()
{
    int value;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Sum of digits: " << digitSum(value) << endl;
    return 0;
}

int digitSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);     
        num = num / 10;             
    }
    return sum;
}
