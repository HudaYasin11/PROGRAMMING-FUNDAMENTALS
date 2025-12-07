#include<iostream>
usingnamespace std;
string checkTitle(float a, char g);
int main()
{
int age , int gender;
cout<<"Enter ur age:";
cin>> age;
cout<<"Enter ur gender (m/f)";
cin>> gender;
checkTitle(float age, char gender)
cout<<""<< 
}
 return string checkTitle(float a, char g)
{

if(age >= 16 && g == 'm')       {return Mr;}
else if(age<16 && g == 'm')     {return Master;}
else if(age >= 16 && g == 'f')  {return Ms;}
else if(age < 16 && g == 'f')   {return Miss;}
}