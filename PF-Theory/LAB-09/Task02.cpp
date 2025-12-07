#include<iostream>
using namespace std;
int main()

{
string movieName;
int price= 500;
int index =1;
string Movie[] =  {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
cout<<"enter the name of the movie:";
cin>> movieName;
for(int i=0; i<5;i++)
{
if(movieName == Movie[i])
{ index = i;
break;}
}
if(index%2!=0)
{
     price = price * 0.95;
     cout<<"discounted price is:"<<price<<endl; }
else 
{
    price = price * 0.90;
    cout<<"discounted price is:"<<price<<endl; }
return 0;
}
