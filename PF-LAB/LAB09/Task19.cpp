#include<iostream>
using namespace std;
string specialArray(int arr[], int size);
int main()
{
int n;
cout<<"enter the sixe of array:";
cin>>n;
cout<<"enter"<<" " << n <<"numbers one per line\n";
int arr[n];
for(int i =0; i<n; i++)
{cin >> arr [i];}

string result = specialArray( arr, n);
cout<<"Result is:"<<result<<endl;
}
string specialArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
{if((i%2 == 0 && arr[i]% 2 != 0) || (i%2 !=0 && arr[i]%2 ==0))
{return "false";}
}
return "true";
}