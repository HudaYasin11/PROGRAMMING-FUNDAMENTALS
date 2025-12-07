#include<iostream>
#include<cmath>
using namespace std;
main()
{
float dis;
float angle;
cout<<"The horizontal distance from tree is:";
cin>> dis;
cout<<"Enter angle of elevation:";
cin>> angle;
float rad = angle * 3.18 /180;
float height = tan(rad) * dis ;

cout<<"The height of the tree is:"<< height;
}