#include<iostream>
using namespace std;
int main()
{
     int n; 
    cout<<"enter th size of array";
    cin>>n;
    bool same = true;
    string arr[n];
    for(int i=0; i<n; i++)
    {   
        cin>>arr[i];
        if(arr[i] != arr[0])
       {
         same= false;
        break;
       }
    
    }
    if(same)
    cout<<"true";
    else
    cout<<"false";
    return 0;

}