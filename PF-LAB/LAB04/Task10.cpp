#include<iostream>
using namespace std;
void name( string n);
main()
{
 system("color 4");
 string a;
 cout<<"ENTER YOUR NAME";
 getline (cin , a);

 name( a);
}
void name (string n)

{
 while(true)
 cout<<"Your Good name is:"<< n;
}