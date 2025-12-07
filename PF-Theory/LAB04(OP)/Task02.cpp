# include<iostream>
using namespace std;
void Swap(string a);
main()
{
string b;
cout<<"Enter  True or False:"<<endl;
cin>> b;
Swap( b);
}
void Swap(string a)
{
if( a == "True")
cout<<"False"<<endl;
if( a== "False")
cout<<"True"<<endl;
}
