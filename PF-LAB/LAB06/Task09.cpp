#include<iostream>
using namespace std;
string checkTitle(float a, char g);
int main()
{
float age ;
 char gender;
cout<<"Enter ur age:";
cin>> age;
cout<<"Enter ur gender (m/f)";
cin>> gender;
cout<<"Your title is:"<<checkTitle( age, gender);
}
 string checkTitle(float a, char g)
{

if(a>= 16 && g == 'm')       {return "Mr";}
else if( a < 16 && g == 'm')     {return "Master";}
else if( a >= 16 && g == 'f')  {return"Ms";}
else if( a <  16 && g == 'f')   {return "Miss";}
}