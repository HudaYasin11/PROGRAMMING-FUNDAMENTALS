#include <iostream>
using namespace std;
bool isRepeatingCycle(int length);
int arr[100]; //globally declared array
int size;
int main()
{
    int length;
    cout << "Enter array length: ";
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> arr[i];                 // input in globally declARED ARRAY
    cout << "Enter length of each cycle: ";
    cin >> length;

    cout << isRepeatingCycle(length);

    return 0;
}

bool isRepeatingCycle(int length)
{
    if (length > size) 
        return true;  // if cycle longer than array, automatically valid

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i % length])
            return false;  // mismatch found
    }
    return true;  // all elements matched
}
