#include<iostream>
using namespace std;
float perimeter(char Shape , float Num);
int main()
{
char shape;
float num;
cout<<"Enter Shape( s for square, or c for circle, or t for triangle, or h for hexagon):";
cin>> shape;
cout<<"Enter the number:";
cin>>num;
float result = perimeter(shape ,  num);
cout<<"Perimeter is:"<< result;
return 0;
}
float perimeter(char Shape , float Num)
{
    float p;
if(Shape == 's') { p = Num * 4.0; }
else if(Shape == 'c') { p = Num * 6.28; }
else if(Shape == 't') { p = Num * 3.0; }
else if(Shape == 'h') { p = Num * 6.0; }
return p;
}

