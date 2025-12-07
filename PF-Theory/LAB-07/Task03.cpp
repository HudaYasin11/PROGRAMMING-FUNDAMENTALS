#include<iostream>
using namespace std;
bool prime(int num);
int main()
{
int n;
cout<<"Enter a number:";
cin>> n;
 cout<<  prime(n);

}
bool prime(int num)
{
if( num <= 1 ) 
return false;
for(int i = 2; i< num ; i++)
{if(num % i == 0 ) return false;}
  return true;
}
