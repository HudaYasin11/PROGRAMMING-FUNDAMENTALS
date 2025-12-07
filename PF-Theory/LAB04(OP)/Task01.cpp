#include<iostream>
using namespace std;
void input(int num1, int num2);
main()
{
int a, b;
cout<<"Enter 1st & 2nd number"<<endl;
cin>> a>> b;
 input(a, b);
}
void input(int num1, int num2)
{
if ( num1 == num2)
{cout<<"TRUE";}
if (num1 != num2)
{cout<<"FALSE";}
}