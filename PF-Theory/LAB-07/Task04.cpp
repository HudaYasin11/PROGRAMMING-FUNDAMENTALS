#include<iostream>
using namespace std;
bool prime(int num);
int primorial(int n);
int main()
{
int value;
cout<<"Enter the number:";
cin>> value;
cout<< primorial(value);
}
bool prime(int num)
{
if (num <= 1){return false;}
for(int i = 2; i < num ; i++)
{if( num % i == 0) return false;}
return true;
}
int primorial(int n)
{
int count = 0;
int product = 1;
for(int num = 2 ; count < n; num++)
{    
    if(prime(num))
   {
    product = product * num;
    count++;
   }
}

return product;
}






