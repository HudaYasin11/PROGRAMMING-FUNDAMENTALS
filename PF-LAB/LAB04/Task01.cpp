#include<iostream>
using namespace std;
void fuel( float dis);
main()
{ 
float dis;
cout<<"Enter the distance";
cin>>dis;
fuel(dis);
}
void fuel( float dis)
{
float fuel;
fuel = dis * 10; 
cout<<" Amount of fuel needed:"<<fuel;
}