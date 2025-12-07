#include<iostream>
using namespace std;
void how_many_stickers (int stickers);
main()
{ 
int n;
cout<<"Enter number of sides";
cin>>n;
how_many_stickers (n);
}
void how_many_stickers (int stickers)
{
int stickers = 6 *( stickers*stickers);
cout<<"The number of stickers are:"<< stickers <<endl;
}

