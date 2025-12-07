#include<iostream>
using namespace std;
main()
{ 
int population,n;
cout<<"Enter the current world population";
cin>>population;
cout<<"Enter the births per month:";
cin>>n;
cout<<"The number of people when spaceship is created is" << ( n* 360)+ population;
}