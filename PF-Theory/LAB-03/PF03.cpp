#include<iostream>
using namespace std;
main()
{
system("color F5");
int Vf,Vi,t,A;
cout<<"Enter initial velocity";
cin>>Vi;
cout<<"Enter time";
cin>>t;
cout<<"Enter Acceleration";
cin>>A;
Vf=Vi+A*t;
cout<<"The Final Velocity is:"<<Vf;
}