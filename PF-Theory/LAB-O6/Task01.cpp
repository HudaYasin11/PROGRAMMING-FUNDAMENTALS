#include<iostream>
using namespace std;
string decideActivity( string temp , string hum);
int main()
{
string input1 , input2;
cout<<"Enter Temperature(warm/ cold)):"; cin>> input1;
cout<<"Enter humidity(dry/humid):"; cin>> input2;
string result = decideActivity( input1 , input2 );
cout<< result;
return 0;

}
string decideActivity( string temp , string hum)
{
string activity;
if ( temp == "warm" && hum == "dry" )
{activity = "Recommended Activity: Play tennis";}
else if(temp == "warm" && hum == "humid")
{activity ="Recommended Activity: GO SWIM";}
else if(temp == "cold" && hum == "dry")
{activity ="Recommended Activity: Play basketBall";}
else if(temp == "cold" && hum == "humid")
{activity ="Recommended Activity: watch tv";}
else
{activity ="INVALID INPUT";}

return activity;
}