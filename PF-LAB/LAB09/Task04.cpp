#include<iostream>
using namespace std;
int main()
{
    int value[5];
    for(int count=0; count<5; count++)
    {
        cout<<"Enter the element:";
        cin>>value[count];
    }
   
    cout<<"The value of 1st element is:"<<value[0]<<endl;
    cout<<"The value of last element is:"<<value[4]<<endl;
    return 0;
}