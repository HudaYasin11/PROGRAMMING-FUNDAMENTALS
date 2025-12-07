#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size)
int main()
{
int n;
cout<<"enter number of resistors:";
cin>> n;
cout<<"enter"<<" " << n <<"resistances  one per line\n";
double arr [n];
for(int i =0 ; i<n ;i++)
{cin>>arr[i];}
cout<<calculateTotalResistance (arr ,n)
return 0;
}
double calculateTotalResistance(double resistance[], int size)
{
    double sum = 0;
    for(int i=0; i < size; i++)
{sum = sum + arr [i];}
    return sum;
}