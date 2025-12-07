#include<iostream>
#include<cmath>
using namespace std;
bool greaterNumber(int n1 , int n2);
int main()
{
int num1 , num2;
cout<<"Enter 1st number:"; cin>> num1;
cout<<"Enter 2nd number:"; cin>> num2;
cout<< greaterNumber(num1 , num2);
return 0;
}
bool greaterNumber(int n1 , int n2)
{
if(n1 >n2)
return true;
else
return false;
}