#include<iostream>
using namespace std;
void status(int marks);
void check(int numbers);
main()
{
int a;
cout<<"Enter ur test score:";
cin>>a;
if( a>50)
{status(a);}
if(a<50)
{check(a);}
}
void status(int marks)
{cout<<"Congrats , YOU have passed.";}
void check(int numbers)
{cout<<"FAIL,BETTER NEXT TIME";}

