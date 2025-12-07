#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
int main()
{
int value1, value2;
cout<<"Enter the number:";
cin>> value1;
cout<<"Enter the number whoes f is to be checked:";
cin>> value2;
cout<<frequencyChecker( value1 , value2 );
return 0;
}
int frequencyChecker(int number, int digit)
{
int n=0;
while(number != 0)
{
if(number % 10 == digit)
    n ++;
    number= number/10;
}

 return n;
}










