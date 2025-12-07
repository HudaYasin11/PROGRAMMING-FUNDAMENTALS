#include<iostream>
using namespace std;
int main()
{
     int n; 
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers :";
    for(int i=0; i<n ; i++)
    {
        cin>> arr[i];
    if(arr[i]%2 != 0)
    {
         arr[i]= arr[i]+2;

    }
    else
    {   arr[i ]= arr[i]-2;
        
    }
    }
    
    cout<<"The transformed string is :";
    for(int z=0; z<n;z++)
   { cout<<arr[z];}

    return 0;
}