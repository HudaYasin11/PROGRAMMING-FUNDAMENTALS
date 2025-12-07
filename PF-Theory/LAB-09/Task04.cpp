#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"enter th size of array";
    cin>>n;
    bool isFound= false;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 7)
       { isFound = true;
        break;}
    
    }
    if(isFound)
    cout<<"Boom";
    else
    cout<<"there is no 7 in the array";
    return 0;

}