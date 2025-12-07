#include<iostream>
using namespace std;
void jazzifyChords( string chords[], int numChords);
int main()
{
int n;
string value;
cout<<"Enter the number of digits to be entered: ";
cin>> n;
string arr [n];
cout<<"enter chords";
for(int i =0; i<n; i++)
{cin >> arr [i];}
jazzifyChords(  arr,n );
cout<<"jazzified chords are:\n";
for(int i =0; i<n;i++)
{cout<< arr[i]<<endl;}
return 0;
}
void jazzifyChords( string chords[], int numChords)
{
for(int i=0; i<numChords; i++)
{if (chords[i].back() !='7')
   { chords[i]= chords[i] + "7";}
}

}