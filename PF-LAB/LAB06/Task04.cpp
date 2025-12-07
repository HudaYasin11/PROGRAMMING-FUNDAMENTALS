#include<iostream>
using namespace std;
int findGreatest(int a, int b , int c);
int main()
{
    int num1 , num2 , num3;
    cout<<"ENTER 3 Numbers:"<<endl;
    cin>> num1 >> num2 >> num3;
    cout<<"GREATEST NUMBER is:" <<findGreatest( num1, num2 ,num3 );
return 0;
}
int findGreatest(int a , int b , int c)
{
if( a>b && a>c )     {return a;}
else if( b>a && b>c ) {return b;}
else if( c>a && c>b ){ return c;}
else 
return 0;
}