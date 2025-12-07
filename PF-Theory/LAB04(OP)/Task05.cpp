#include<iostream>
using namespace std;
void possibleBonus(int a , int b);
main()
{
int position1, position2;
cout<<"Enter ur position";
cin>> position1;
cout<<"Enter friend position:";
cin>> position2;
possibleBonus( position1, position2);
}
void possibleBonus(int a , int b)
{
int bonus;
bonus = b -a ;
if (bonus>1 && bonus<=6)
{cout<<"TRUE";}
if( bonus<1 && bonus>6)
{cout<<"FALSE"; 
}
}