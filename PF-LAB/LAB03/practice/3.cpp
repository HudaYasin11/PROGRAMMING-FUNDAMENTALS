#include <iostream>
using namespace std;
void howManyStickers(int s);
main()
{
int n;
cout<<"Enter length of the sides";
cin>>n;
howManyStickers (n);
}
void howManyStickers ( int s)
{
int stickers= 6 * (s *s );
cout<<"The number of stickers required is:"<<stickers;
}


