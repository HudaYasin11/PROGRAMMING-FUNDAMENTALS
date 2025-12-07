#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
int main()
{
int n;
cout<<"enter the numbers of digits";
cin>> n;
cout<<"enter"<<" " << n <<"numbers one per line\n";
int arr[n];
for(int i =0 ; i<n ;i++)
{cin>>arr[i];}
int largest = findLargestNumber(arr, n);
cout<<"The largest number is:"<< largest;
return 0;
}
int findLargestNumber(int arr[], int size)
{
int largest = arr[0];
for(int i = 0; i < size; i++)
if( arr[i] > largest)
{largest = arr[i];}
return largest;

}