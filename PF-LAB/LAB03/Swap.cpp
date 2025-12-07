#include<iostream>
using namespace std;
void swap_numbers(int &a,int &b)
{
int temp = a;
a=b;
b= temp;
}
main()
{
int x, y;
cout<< "Enter 1st number";
cin>>x;
cout<<"Enter second number";
cin>>y;
cout<<"Before swap: x=" << x <<",y="<<y<<endl;
swap_numbers(x,y);
cout <<"After swap:x"<< x<< "y="<<y<<endl;
}