#include<iostream>
using namespace std;
string change(string word);
int main()
{
    string value;
cout<<"Enter the string";
cin>>value;
for (int idx =0; value[idx] !='\0'; idx ++)
{
    if(value[idx] == 'z')
    cout<<"a";
    else if(value[idx] == 'Z')
    cout<<"A";
    else
    value[idx] = value[idx] +1;
    cout<< value[idx];
}
}