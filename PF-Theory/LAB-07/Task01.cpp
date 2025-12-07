#include<iostream>
using namespace std;
void amplify(int n);
int main()
{
int num;
cout<<"Enter high bound:";
cin>>num;
amplify(num);
}
void amplify(int n)
{
 cout<<"The sequence is:";
for (int i = 1; i <= n; i++ )
{ if(i % 4 == 0) 
   cout<< i * 10 <<",";
  else
cout<<i<<",";
}}


