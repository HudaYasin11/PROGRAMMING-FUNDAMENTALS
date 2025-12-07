#include<iostream>
using namespace std;
int main()
{
string input;
cout<<"enter a string:";
getline(cin,input);
for(int idx=0;idx< input.length();idx++)
{
    if(input[idx] == 'a'||input[idx] == 'e' || input[idx] == 'i' || input[idx]== 'o'|| input[idx]== 'u')
   { input[idx] = input[idx] + 1;}
   
}
 cout<< input<<endl;
 
}