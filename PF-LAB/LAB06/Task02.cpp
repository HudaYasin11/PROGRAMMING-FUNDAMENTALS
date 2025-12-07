#include<iostream>
using namespace std;
int checkParity(int n);
int main()
{
    int num;
    cout<<"Enter a 3 digit number:";
    cin>>num;
  int result = checkParity( num ) ;
   {if ((num % 2 == 0 && result% 2 == 0) || (num % 2 != 0 && result % 2 != 0))
    {cout<<"True";}
   else
   {cout<<"False";}
   return 0;
    }
  }
int checkParity(int n)
{
int n1 , n2 , n3;
n1 = n/100;
n2 = (n/10)%10;
n3 = (n/1)%10;
int sum = n1 + n2 + n3;

}