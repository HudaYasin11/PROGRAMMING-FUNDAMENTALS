#include <iostream>
using namespace std;

string numberToText(int n)
{
    if (n < 1 || n > 99) return "Number out of range";

    string text; 
    // Step 1: handle numbers 1-19 separately
    if (n <= 19)
    {
        if (n == 1) text = "one";
        else if (n == 2) text = "two";
        else if (n == 3) text = "three";
        else if (n == 4) text = "four";
        else if (n == 5) text = "five";
        else if (n == 6) text = "six";
        else if (n == 7) text = "seven";
        else if (n == 8) text = "eight";
        else if (n == 9) text = "nine";
        else if (n == 10) text = "ten";
        else if (n == 11) text = "eleven";
        else if (n == 12) text = "twelve";
        else if (n == 13) text = "thirteen";
        else if (n == 14) text = "fourteen";
        else if (n == 15) text = "fifteen";
        else if (n == 16) text = "sixteen";
        else if (n == 17) text = "seventeen";
        else if (n == 18) text = "eighteen";
        else if (n == 19) text = "nineteen";

        return text;
    }

    // Step 2: handle tens place (20-99)
    int tens = n / 10;
    if (tens == 2) text = "twenty";
    else if (tens == 3) text = "thirty";
    else if (tens == 4) text = "forty";
    else if (tens == 5) text = "fifty";
    else if (tens == 6) text = "sixty";
    else if (tens == 7) text = "seventy";
    else if (tens == 8) text = "eighty";
    else if (tens == 9) text = "ninety";

    // Step 3: handle units place
    int units = n % 10;

    if (units != 0)
    {
        text = text + "-";  // add hyphen

        if (units == 1) text = text + "one";
        else if (units == 2) text = text + "two";
        else if (units == 3) text = text + "three";
        else if (units == 4) text = text + "four";
        else if (units == 5) text = text + "five";
        else if (units == 6) text = text + "six";
        else if (units == 7) text = text + "seven";
        else if (units == 8) text = text + "eight";
        else if (units == 9) text = text + "nine";
    }

    return text;
}

int main()
{
    int number;
    cout << "Enter a number between 1 and 99: ";
    cin >> number;

    cout << numberToText(number) << endl;

    return 0;
}
