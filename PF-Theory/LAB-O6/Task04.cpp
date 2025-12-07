#include<iostream>
using namespace std;
int main()
{
char serviceCode;
int minutes;
float amountDue;
int minsAtDay , minsAtNight;

    cout<<"Enter ur service code:(R/r for regular and P/p for premium)";
    cin>>serviceCode;
    cout<<"SERVICE CODE:"<< serviceCode<<endl;
        if(serviceCode == 'R'|| serviceCode== 'r')
{
    cout<<"enter number of minutes of call:";
    cin>>minutes;
    cout<<"Total minutes used:"<<minutes;
    amountDue= 10.0;
    if(minutes>50)
    {amountDue = amountDue + (minutes -50)* 0.20;
    cout<<"Amount due :"<< amountDue<<endl;} 
 }
         else if(serviceCode == 'P' || serviceCode == 'p')
{
    cout<<"Enter minutes in day:";
    cin>> minsAtDay;
    cout<<"Enter minutes at night:";
    cin>> minsAtNight;
    amountDue = 25;
    if( minsAtDay>75)
    {amountDue = amountDue + ( minutes - 75)* 0.10;}
    if(minsAtNight > 100)
    {amountDue = amountDue + (minutes - 100)* 0.05;}
    cout<<"Amount Due:"<< amountDue<<endl;
}
         else
         {cout<<"ERROR:INVALID CHOICE";}
        
        return 0;
}




