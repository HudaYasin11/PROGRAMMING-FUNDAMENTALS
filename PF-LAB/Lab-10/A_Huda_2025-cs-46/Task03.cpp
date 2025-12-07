#include<iostream>
using namespace std;
int main()
{
    int n;
    bool check = false;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {cin >> arr[i];}
 for(int idx=1; idx< n-1 ; idx++)
 {
    if (arr[idx]>arr[idx-1] && arr[idx] > arr[idx+1])
    {
        cout<<"peak :"<<arr[idx]<<endl;
  check = true;}
 }
    if  (!check){cout<<"no peak found";}
}
