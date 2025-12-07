#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x , int y);
void Player(int x , int y);
main()
{
int x = 5 ,  y= 1;
system("cls");
maze();
while(true)
{
Player( x ,  y );
y= y +1;
if(y== 7)
{y= 1;}
}
}
void maze()
{
    cout << "####################" << endl; 
    cout << "#                  #" << endl; 
    cout << "#                  #" << endl;
    cout << "#                  #" << endl;
    cout << "#                  #" << endl;
    cout << "#                  #" << endl;
    cout << "#                  #" << endl;
    cout << "####################" << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void Player(int x , int y)
{
gotoxy(x , y);
cout<<"P";
Sleep(500);
gotoxy(x , y);
cout<<"  ";
}


