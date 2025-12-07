#include<iostream>
using namespace std;
void fuel (int dis);
main()
{
int a;
cout<<"Enter distance";
cin>>a;
   fuel(a);
}
void fuel (int dis)
{
float fuel_req = dis * 10;
cout<<"The fuel required is"<< fuel_req;
}
