#include<iostream>
using namespace std;
bool check(string word, char letter );
int main()
{
 string word;
 char letter;
cout<<"ENTER WORD:";
cin>>word;
cout<<"Enter letter";
cin>> letter;
if(check(word , letter))
cout<<letter <<"is found in"<<word;
else
cout<<letter <<"is not found in"<<word;
}
bool check(string word, char letter );
{
    bool found = false;
    for(int idx = 0; idx!= "\0"; idx++;)
    {
        if( word[idx] == letter )
        {
            found = true;
            break;
        }
    }
   return found;
}
