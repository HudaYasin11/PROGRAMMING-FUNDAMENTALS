#include<iostream>
using namespace std;
 bool SameNumbers(int a , int b , int c);
 int main()
 {
  int num1, num2, num3;
  cout<<"Enter three numbers:";
  cin>> num1 >> num2>> num3;
 cout<<"The output is:"<< SameNumbers(num1,num2,num3);
  return 0;
}
bool SameNumbers(int a , int b , int c)
{
if(a == b && b== c)
return true;
else
return false;
}