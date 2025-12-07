#include<iostream>
using namespace std;
void print();
void tpChecker(int people, int tissue);
main()
{
int n, tp;
print();
cout<<"Enter number of people in household:";
cin>>n;
cout<<"Enter number of tp rolls:";
cin>> tp;
 tpChecker(n,tp);
}
void print()
{
cout<<" .......SURVIVAL CHECK WITH TISSUPE PAPER IN COVID........"<<endl;
}
void tpChecker(int people, int tissue)
{
int numberOfsheets =  tissue * 500;
int numberofSheetsUsed = people * 57;

if( numberOfsheets< numberofSheetsUsed )
{
int days = numberOfsheets /people;
cout<<"You will only last "<<days<<"days,so buy more";
}
 if( numberOfsheets> numberofSheetsUsed )
{
int days = numberOfsheets /people;
cout<<"You will  last "<<days<<"days,no need to panic";
}
}

