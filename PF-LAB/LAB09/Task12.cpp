#include<iostream>
using namespace std;
int main()
{
int n,num;

int count = 0;
cout<<"enter the numbers of digits";
cin>> n;
cout<<"enter"<<" " << n <<"numbers one per line\n";
int arr[n];
for(int i =0 ; i<n ;i++)
{cin>>num;
bool duplicate = false;
for (int j = 0; j < count; j++){
if(arr[j] == num)
{cout<<"Already entered"<<" "<< num << endl;
 duplicate = true;
break;
}
}
if(!duplicate)
{arr [count ++] = num;}
}
cout<<"unique numbers are :";
for(int i =0; i< count; i++)
{cout<< arr[i] <<" ,";}
cout<<endl;
return 0;
}
