#include<iostream>
using namespace std;
int main()
{
int n,num=0;
cout<<"enter size";
cin>>n;
string arr[n];
for(int i=0; i<n;i++)
{cout<<"enter word"<<i<<":";
cin>>arr[i];}
char letter;
cout<<"Enter letter u want to check";
cin>>letter;
for(int i=0; i<n;i++)
{for (int j=0; j<arr[i].length();j++)
    if(arr[i][j]== letter)
    {num++;}
}
cout<<num;
}