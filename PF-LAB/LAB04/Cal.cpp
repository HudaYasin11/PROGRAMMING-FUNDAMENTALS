#include<iostream>
using namespace std;
void sum(int a, int b);
void mul( int c , int d);
void div( float e , float f);
void sub( int g, int h);
main()
{
int num1 ,num2;
char op;
cout<<"Enter 1st number";
cin>>num1;
cout<<"Enter 2nd number";
cin>>num2;
cout<<"Enter an operator:";
cin>>op;
if(op=='+')
{
sum(num1 , num2);
}
if(op=='*')
{
mul(num1 , num2);
}
if(op=='/')
{
div(num1 , num2);
}
if(op=='-')
{
sub(num1,num2);
}
}
void sum(int a, int b)
{
int add = a + b;
cout<<"The sum is:"<<add;
}
void mul(int c, int d)
{
int product = c * d;
cout<<"The product is:"<<product;
}
void div (float e , float f)
{
float out= e/ f;
cout<<"The division is:"<<out;
}
void sub(int g, int h)
{
int subtract = g - h;
cout<<"The subtraction is:"<<subtract;
}
