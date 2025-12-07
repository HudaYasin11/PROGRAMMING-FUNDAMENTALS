#include<iostream>
using namespace std;
void reverse( int array[], int num);
int main()
{
int n;
string value;
cout<<"Enter the number of digits: ";
cin>> n;
if(n<=0)
{cout<<"invalid input";
return 0;} 
int arr [n];
cout<<"enter numbers";
for(int i =0; i<n; i++)
{cin >> arr [i];}

cout<<"reversed numbers are:";
reverse( arr, n);
return 0;
}
void reverse( int array[], int num)
{
 
for(int i = num - 1; i >=0; num --)
{cout<< array [i] << " ";}

}

