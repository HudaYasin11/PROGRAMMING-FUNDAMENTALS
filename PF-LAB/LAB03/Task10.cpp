#include<iostream>
using namespace std;
main()
{
int win,loss,draw;
string Team;
cout<<"Enter the name of cricket team";
cin>>Team;
cout<<"Enter number of wins";
cin>>win;
cout<<"Enter number of losses";
cin>>loss;
cout<<"Enter number of draws";
cin>>draw;
cout<<Team<<"has obtained"<< ( win*3 + loss*0 + draw*0) <<"points.";
}