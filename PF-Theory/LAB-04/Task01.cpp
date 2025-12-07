#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);
 main()
{
system("cls");
cout<<"Test";
gotoxy(15,15);
cout<<"HELLO its a good day";
}
void gotoxy(int x ,int y)
{
COORD Coordinates;
Coordinates.X = x;
Coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Coordinates);
}
