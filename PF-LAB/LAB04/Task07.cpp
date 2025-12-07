#include<iostream>
using namespace std;
void score( int marks);
main()
{ 
int m;
cout<<"Enter your marks";
cin>>m;
score(m);
}
void score(int marks)
{
if (marks>=50)
{
cout<<"PASS";
}
if(marks<50);
{
cout<<"FAIL";
}
}
