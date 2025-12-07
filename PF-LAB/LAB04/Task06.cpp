#include<iostream>
using namespace std;
void vote(int  x);
main()
{
int age;
cout<<"Enter your  age ";
cin>>age;
vote(age);
}
void vote(int x)
{
if  (x<=18)
{
cout<<"eligible";
}
}