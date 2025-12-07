#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number of squares";
cin>>n;

string color[n];
cout<<"Enter the colors  :\n";
for(int i=0; i<n;i++)
{cin>>color[i];}
 int TotalTime =0;
 for(int i=0; i<n; i++)
{TotalTime = TotalTime +2;
 if(i>0 && color[i] != color[i-1])
 TotalTime = TotalTime +1;
}

cout <<"Total Time to color the patteren :"<<TotalTime<< "seconds";
return 0;
}