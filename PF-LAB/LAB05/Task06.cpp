#include<iostream>
using namespace std;

char checkAlphabetCase(char value);
int main()
{
    char entry;

   cout<<"Enter the Alphabet:";
   cin>> entry;
   checkAlphabetCase( entry );
return 0;
}
char checkAlphabetCase(char value)
{
if( value == 'A' )
{
    cout<<"You entered Capital A ";

}
if( value == 'a')
{
    cout<<"You enetered small a ";
}


}