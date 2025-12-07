#include<iostream>
using namespace std;
int main()
{
string word;
cout<<"Enter a string:";
getline(cin, word);
int i =word.length();
if( i% 2 == 0)
cout<<"true";
else
cout<<"false";
return 0;
}