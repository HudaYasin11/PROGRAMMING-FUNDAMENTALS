#include<iostream>
using namespace std;
void longestDuration( int hours, int min );
main()
{
int h, m;
cout<<"Enter number of hours & min:"<<endl;
cin>>h>>m;
longestDuration( h, m );
}
void longestDuration( int hours, int min )
{
int hours_in_min = hours * 60;
if(hours_in_min > min )
cout<<"Hours have longest duration"<<endl;
if( min > hours_in_min )
cout<<"Min have longest duration"<<endl;
}