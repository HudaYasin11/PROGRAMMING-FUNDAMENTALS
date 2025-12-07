#include<iostream>
using namespace std;
void check(int a , int b);
main()
{
int num1,num2;
cout<<"Enter first number";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
check(num1,num2);
}
void check(int a , int b)
{
if (a%2==0)
{
cout<< "The number is even"<<a<<endl;
}
if(a%2 !=0)
{
cout<<"The number is odd"<<a<<endl;
}
if (b%2==0)
{
cout<< "The number is even"<<b<<endl;
}
if(b%2 !=0)
{
cout<<"The number is odd"<<b<<endl;
}
}


