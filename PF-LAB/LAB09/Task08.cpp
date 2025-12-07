#include<iostream>
using namespace std;
char value( string value);
int main()
{
    string word;
    cout<<"Enter the word:";
    cin>> word;
    value(word);
    return 0;
}
char value( string value)
{
    for(int idx =0; value[idx] != '\0'; idx++ )
   { cout<<"The letteer"<< idx <<"position"<< value[idx]<<endl;}
}