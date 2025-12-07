#include <iostream>
using namespace std;
float lowestPrice(int kilo, string period); 
int main()
{
int n;
string time;
cout<<"Enter number of kilometers[1-5000]:";
cin>> n;
cout<<"Enter period (day/night)";
cin>> time;
float result = lowestPrice( n , time);
cout<< result;
}
float lowestPrice(int kilo, string period)
{
float cheapRide;
if(period == "day") {cheapRide = 0.70 + (0.79) * kilo;}
else if(period == "night") {cheapRide = 0.70 + (0.90) * kilo;}   
if (kilo >= 20)
{
float busCost = 0.09 * kilo;
if (busCost < cheapRide) 
{cheapRide = busCost;}
}
if (kilo >= 100) 
{ 
float trainCost = 0.06 * kilo;
if (trainCost < cheapRide) 
{cheapRide = trainCost;}
}
return cheapRide;
}