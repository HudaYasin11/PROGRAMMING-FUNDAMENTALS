#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    int progress=0;
    for(int idx=0;idx<n;idx++)
    {
        cin>>arr[idx];
    }
     for(int idx=0;idx<n;idx++) 
    {if (arr[idx] > arr[idx-1]) 
    progress++;
    }
   cout<<progress<<endl;
}