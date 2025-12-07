#include<iostream>
using namespace std;
void genrateFabonacciSeries(int length);
int main()
{
    int num;
cout<<"Enter the series number:";
cin>> num;
genrateFabonacciSeries(num);
return 0;
}
void genrateFabonacciSeries(int length)
{
    int a= 0, b=1;
    int next;
    cout<<a<<","<<b<<",";
for(int i = 3; i<=length; i++)
{
    next = a + b;
    cout<<next<<",";
    a=b;
    b=next;
}
}














