#include<iostream>
using namespace std;
void timetravel(int hr , int min);
int main()
{
int hour , min;
cout<<"Enter hour";
cin>> hour;
cout<<"Enter min";
cin>> min;
 timetravel( hour, min);

}
void timetravel(int hr , int min)
{
    min = min + 15;
if(min> 60)
{
    min = min - 60;
    hr = hr + 1;
}
if( hr >24)
{
    hr = hr  - 24;
}
cout<< hr << ":" << min;




}