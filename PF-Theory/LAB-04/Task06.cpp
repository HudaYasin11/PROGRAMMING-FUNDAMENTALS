#include<iostream>
#include<windows.h>
using namespace std;
int x = 80 ,  y=10;
void gotoxy (int x , int y);
void H();
void A();
void S();
void N();
main()
{
system("color 4");
system("cls");

 H();y+=6;
 A();y+=6;
 S();y+=6;
 S();y+=6;
 A();y+=6;
 N();

}
void gotoxy (int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void H()
{
 
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" HHHHHHHHH "; 
gotoxy(x , y++);cout<<" H       H "; 
gotoxy(x , y++);cout<<" H       H "; 
}
void A()
{
 
gotoxy(x , y++);cout<<" AAAAAAAAAA "; 
gotoxy(x , y++);cout<<" A        A ";
gotoxy(x , y++);cout<<" AAAAAAAAAA "; 
gotoxy(x , y++);cout<<" A        A ";
gotoxy(x , y++);cout<<" A        A "; 

}
void S()
{

gotoxy(x , y++);cout<<" SSSSSSSSS "; 
gotoxy(x , y++);cout<<" S         ";
gotoxy(x , y++);cout<<" SSSSSSSSS ";
gotoxy(x , y++);cout<<"         S "; 
gotoxy(x , y++);cout<<" SSSSSSSSS ";
}
void N()
{
gotoxy(x , y++);cout<<" N      N "; 
gotoxy(x , y++);cout<<" N N    N "; 
gotoxy(x , y++);cout<<" N  N   N ";
gotoxy(x , y++);cout<<" N   N  N "; 
gotoxy(x , y++);cout<<" N    N N "; 
}







