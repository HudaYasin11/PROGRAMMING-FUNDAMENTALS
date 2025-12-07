#include<iostream>
using namespace std;
int main()
{
    int value[5];
    cout<<"Enter 1st number:";
    cin>> value[0];
    cout<<"Enter 2nd number:";
    cin>> value[1];
    cout<<"Enter 3rd number:";
    cin>> value[2];
     cout<<"Enter 4th number:";
    cin>> value[3];
    cout<<"Enter 5th number:";
    cin>> value[4];
   
   
    cout<<"The value of 1st element is:"<<value[0]<<endl;
    cout<<"The value of last element is:"<<value[4]<<endl;
    return 0;
}