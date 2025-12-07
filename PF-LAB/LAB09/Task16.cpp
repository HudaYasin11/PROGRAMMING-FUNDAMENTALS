#include<iostream>
using namespace std;
void price( float arr[], float price);

int main()
{
 float p;
 int idx;
  float coins[4];
 for( idx =0; idx<4 ; idx++)
 {cin>> coins[idx];}
 cout<<"Enter total price";
 cin>>p;
 price( coins , p);
 return 0;
}
void price( float arr[] , float price)
{
  double total = arr[0] * 0.25 + arr[1] * 0.10 +arr[2] * 0.05 + arr[3] * 0.01;   

if( price > total) 
cout<<"false";
else
cout<<"true";
}