#include<iostream>
using namespace std;
void vote(int age);
main()
{
int a ;
cout << "Enter ur age";
cin>>a;
if (a >=18)
vote(a);
}
void vote(int age)
{
cout<<"You are eligble to vote";
}