#include<iostream>
using namespace std;
int main()
{
string name;
float matric,inter,ecat;
cout<<"enter your name";
getline(cin,name);
cout<<"enter your matric";
cin>> matric;
cout<<"enter your inter ";
cin>> inter;
cout<<"enter your ecat";
cin>>ecat;
cout<<"aggregate is :"<< (matric/1100 * 10 + inter/550 *40 + ecat/400 * 50);
return 0;
}





