#include<iostream>
using namespace std;
int totalDigits(int num);
int main()
{
int n;
cout<<"enter the number:";
cin>> n;
cout<<totalDigits(n);
return 0;
}
int totalDigits(int num)
{
    int count=0;
if(num == 0)
{return 1;}
while(num != 0)
{ num = num/10;
count ++;}
return count;
}