#include<iostream>
using namespace std;
string checkSpeed(float s);
int main()
{
    int sp;
    cout<<"Enter speed:";
    cin>> sp;
    cout<<"The Speed Status:"<< checkSpeed( sp); 

} 
string checkSpeed(float s)
{
    string output;
if (s <= 10) {return "slow";} 
if (s>10 && s<=50) {return "average";} 
if (s>50 && s<=150) {return "fast";} 
if (s>150 && s <=1000) {return "ultrafast";} 
if(s>1000) {return "extremely fast";}
}