#include<iostream>
using namespace std;
main()
{
int Rollnum;
float Aggregate;
string Name;
char Section;
cout<< "Enter your name";
getline(cin,Name);
cout<<"Enter your Rollnum";
cin>> Rollnum;
cout<< "Enter your Aggregate";
cin>> Aggregate;
cout<<"Enter your Section";
cin>> Section;
cout<<"Name:"<< Name<<endl;
cout<<"Rollnum:"<<Rollnum<<endl;
cout<<"Aggregate:"<< Aggregate<<endl;
cout<<"Section:"<< Section<<endl;
}