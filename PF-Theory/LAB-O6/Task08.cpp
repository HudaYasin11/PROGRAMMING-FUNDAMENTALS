#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyBallGames(string yearType, int holidays, int hometownWeekends);
 int totalWeekends = 48;
int main()
{
     
int h , p;
string yearType;
cout<<"enter year type (leap/normal)";
cin>> yearType;
cout<<"enter the holidays other than saturdays and sundays";
cin>> h;
cout<<"number of weekends valadmir travels to hometown";
cin>> p;

cout<<"The total volleyball games are :"<<calculateVolleyBallGames( yearType , h , p);;

}
 
 int calculateVolleyBallGames( string yearType, int holidays, int hometownWeekends)
{
double weekendsInsofia = (48 - hometownWeekends ) * 3.0/4;
double playHolidays = holidays * 2.0/3;
double total = weekendsInsofia + playHolidays +  hometownWeekends;
if( yearType == "leap")
{
 total = total * 1.15;
}
int result  = (int)floor(total);
return result;
}