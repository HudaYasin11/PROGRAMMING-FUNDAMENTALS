#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x , int y);
void Player(int x , int y);
main()
{
int x = 3 ,  y= 3;
system("cls");
maze();
Player( x ,  y );
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
Sleep(800);
gotoxy(x , y);
cout<<"  ";
gotoxy(8,8);
}


