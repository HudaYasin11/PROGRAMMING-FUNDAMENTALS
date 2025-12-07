#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int days;
cout<<"Enter number of holidays:";
cin>>days;
pet(days);
}
void pet(int holidays)
{
int working_days = 365 -holidays;
int Time_for_playing = (holidays *127 ) + ( working_days * 63);
int norm = 30000;
int diff = norm - Time_for_playing;
int hours = diff/60;
int minutes = diff % 60;
if (Time_for_playing > norm)
{ cout<<"Tom will run away"<<endl;
cout<<hours<<"hours and"<<minutes<<"minutes more for playing"<<endl;}
else
{cout<<"Tom sleeps well"<<endl;
cout<<hours<<"hours and"<<minutes<<"minutes less for playing"<<endl;}
}
