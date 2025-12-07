#include<iostream>
using namespace std;
main()
{
string name;
float kg;
int  Number_of_days_required ;
cout<<"Enter your name: ";
getline(cin,name);
cout<<"Enter the desired weight loss: ";
cin>> kg;
cout<<"The desired weight loss is:"<<kg<<endl;
Number_of_days_required =  kg *  15.0;
cout<< "DOCTOR RECOMMENDATION:"<<endl<<"1-Daily intake of 4000 cal"<<endl<<"2- 1 hr of exercise daily"<<endl;
cout<<"The required days are:"<<Number_of_days_required ;
}