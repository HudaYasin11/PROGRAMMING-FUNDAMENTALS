#include<iostream>
using namespace std;
void measurement(int inches);
main()
{
float a;
cout<<"Enter value in Inches";
cin>> a;
measurement(a);
}
void measurement(int inches)
{
float final_measurement = inches/12;
cout<<"The measurement in Ft is"<< final_measurement<<endl;
}

