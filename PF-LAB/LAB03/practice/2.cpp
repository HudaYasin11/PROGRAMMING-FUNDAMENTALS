#include <iostream>
using namespace std;
void conversion( float inches);
main()
{
int a;
cout<<"Enter value in inches";
cin>>a;
conversion(a);
}
void conversion( float inches)
{
int feet = inches/12;
cout<<"The value in feets is:"<< feet;
}
