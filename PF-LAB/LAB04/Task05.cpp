#include<iostream>
using namespace std;
void add(int a, int b);
main()
{ 
int num1,num2;
cout<<"Enter first number";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
char op;
cout<<"Enter op:";
cin>>op;
if (op =='+')
add(num1,num2);
}
void  add(int a, int b)
{
int sum= a + b;
cout<<"Sum is :"<< sum;
}

