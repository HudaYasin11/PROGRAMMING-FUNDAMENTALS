#include<iostream>
#include<windows.h>
using namespace std;
int x=80, y=10;
void gotoxy(int x , int y);
void H(); 
void U();
void D(); 
void A();
main()
{
system("cls");
system("color 4");
 H(); y+=6;
 U(); y+=6;
 D(); y+=6;
 A(); y+=6;
}

void H()
{
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" HHHHHHHHH "; 
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" H       H "; 
}
void U()
{

gotoxy(x , y++);cout<<"U         U";
gotoxy(x , y++);cout<<"U         U";
gotoxy(x , y++);cout<<"U         U";
gotoxy(x , y++);cout<<"U         U";
gotoxy(x , y++);cout<<"UUUUUUUUUUU";

}
void D()
{

gotoxy(x, y++);cout<<"DDDDDDDDDDDD";
gotoxy(x, y++);cout<<"D          D";
gotoxy(x, y++);cout<<"D          D";
gotoxy(x, y++);cout<<"D          D";
gotoxy(x, y++);cout<<"D          D";
gotoxy(x, y++);cout<<"DDDDDDDDDDDD";

}
void A()
{
gotoxy(x , y++);cout<<" AAAAAAAAAA "; 
gotoxy(x , y++);cout<<" A        A ";
gotoxy(x , y++);cout<<" AAAAAAAAAA "; 
gotoxy(x , y++);cout<<" A        A ";
gotoxy(x , y++);cout<<" A        A ";
 }

void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}