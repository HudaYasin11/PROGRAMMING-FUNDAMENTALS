#include<iostream>
using namespace std;
int main()
{
int size=0;
int j=0;
int sum=0, volume =0;
cout<<"array length";
cin>>size;
int arr[size];
for(int i=0; i<size;i++)
{cin>>arr[i];}
for(int idx=0; size>idx+2; idx=idx +3)
{
    int length= arr[idx];
    int width = arr[idx++];
    int height = arr[idx +2];
    volume = length * width * height;
    sum =sum + volume;}
    cout<<sum;
}

