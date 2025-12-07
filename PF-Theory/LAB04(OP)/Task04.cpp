#include<iostream>
using namespace std;
void checkSpeed( int speed);
main()
{
int yourSpeed;
cout<<"Enter your speed in km/h:"<<endl;
cin>> yourSpeed;
 checkSpeed( yourSpeed);
}
void checkSpeed( int speed)
{
if( speed > 100)
cout<<"OH NO!, you will be challaned ";
if(speed<100)
cout<<"Perfect!, You are going good";
}
