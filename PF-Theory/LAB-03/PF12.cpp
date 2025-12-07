#include <iostream>
using namespace std;
main() 
{
int n,h,w;
cout<<"Enter the amount of paint in square meters";
cin>>n;
cout<<"Enter height";
cin>>h;
cout<<"Enter width";
cin>>w;
int area = w * h;
int number_of_walls = n/ area;
cout<<"The number of walls that can  be painted :"<< number_of_walls ;
}