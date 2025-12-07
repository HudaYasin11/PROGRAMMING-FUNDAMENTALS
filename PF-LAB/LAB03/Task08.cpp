#include<iostream>
using namespace std;
main()
{
float current,voltage,power;
cout<<"Enter voltage(in volts)";
cin>>voltage;
cout<<"Enter current(in amperes)";
cin>>current;
power= voltage * current;
cout<<"Power in watts is:"<<power;
}