#include<iostream>
using namespace std;
int OddishOrEvenish( int digit);
int main()

{
int number;
cout<<"Enter 5-digit number:"<<endl;
cin>>number;
int result = OddishOrEvenish( number);
if(result %2 == 0) 
{cout<<"The number is EVENISH";}
else
{cout<<"The number is ODDISH";}
}
int OddishOrEvenish( int digit)
{
int d1,d2,d3,d4,d5;
d1 = digit / 10000 ;
d2 = (digit / 1000) %  10 ;
d3 = (digit / 100) %  10 ;
d4 = (digit / 10) %  10 ;
d5 = (digit / 1) %  10 ;
int sum = d1 + d2 + d3 + d4 + d5;
return sum;
}