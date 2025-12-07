#include<iostream>
using namespace std;
void reverse(string word);
int main()
{
string value;
cout<<"Enter the value:";
cin>> value;
reverse(value);
return 0;
}
void reverse(string word)
{
    for (int idx; idx>= 0; idx--)
    cout<<word [idx];
}