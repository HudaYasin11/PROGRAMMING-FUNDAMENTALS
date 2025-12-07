#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void printScoreBox();
void spaceship();
void printEnemy();
void printEnemy2();
void printEnemy3();
void gotoxy(int eX ,int eY);
void moveEnemy();
void moveEnemy2();
void moveEnemy3();
void eraseEnemy();
void eraseEnemy2();
void eraseEnemy3();
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
 void displayScore();
int score = 0;
int eX=4, eY= 2;
int pX = 5, pY = 29;
int e2X =53 , e2Y=4; 
int e3X = 10, e3Y = 10;
int eDir = 1;
int e2Dir = 1;
int e3DirX = 1;   
int e3DirY = 1;

int main()
{
    
system("cls");
 printMaze();
printScoreBox();
printEnemy();
 printPlayer();
 while(true)
 {
    displayScore();
 if (GetAsyncKeyState(VK_LEFT))
 {
 movePlayerLeft();
 }
 if (GetAsyncKeyState(VK_RIGHT))
 {
 movePlayerRight();
 }
 moveEnemy();
 moveEnemy2();
 moveEnemy3();
 Sleep(200);
}


}
void printMaze()
{
cout<<"###################################################################################################################################"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"#                                                                                                                                  #"<<endl;
cout<<"####################################################################################################################################"<<endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printEnemy()
{
 gotoxy(eX , eY);
cout<<"   ^^^^^^^    "<<endl;
gotoxy(eX , eY+1);
cout<<" ^-|* = *|-^ "<<endl;
gotoxy(eX , eY+2);
cout<<"   |||||||   "<<endl;
gotoxy(eX , eY+3);
cout << "(~~~) (~~~)";
}
void eraseEnemy()
{
    gotoxy(eX , eY);
cout<<"               "<<endl;
gotoxy(eX , eY+1);
cout<<"               "<<endl;
gotoxy(eX , eY+2);
cout<<"               "<<endl;
gotoxy(eX , eY+3);
cout<<"               "<<endl;
}
void printEnemy2()
{
    gotoxy(e2X, e2Y);
    cout<<"   ^^^^^^^    "<<endl;
    gotoxy(e2X, e2Y+1);
    cout<<" ^-|* = *|-^ "<<endl;
    gotoxy(e2X, e2Y+2);
    cout<<"   |||||||   "<<endl;
    gotoxy(e2X, e2Y+3);
    cout << "(~~~) (~~~)";
}

void eraseEnemy2()
{
    gotoxy(e2X, e2Y);
    cout<<"               "<<endl;
    gotoxy(e2X, e2Y+1);
    cout<<"               "<<endl;
    gotoxy(e2X, e2Y+2);
    cout<<"               "<<endl;
    gotoxy(e2X, e2Y+3);
    cout<<"               "<<endl;
}
void printEnemy3()
 {
    gotoxy(e3X, e3Y);
    cout << "   ^^^^^^^    " << endl;
    gotoxy(e3X, e3Y+1);
    cout << " ^-|* = *|-^ " << endl;
    gotoxy(e3X, e3Y+2);
    cout << "   |||||||   " << endl;
    gotoxy(e3X, e3Y+3);
    cout << "(~~~) (~~~)";
}

void eraseEnemy3()
 {
    gotoxy(e3X, e3Y);
    cout << "               " << endl;
    gotoxy(e3X, e3Y+1);
    cout << "               " << endl;
    gotoxy(e3X, e3Y+2);
    cout << "               " << endl;
    gotoxy(e3X, e3Y+3);
    cout << "               " << endl;
}



void moveEnemy()
{
    eraseEnemy();           
    eX = eX + eDir;             
    
    if (eX >= 116)
        eDir = -1;

    
    if (eX <= 2)
        eDir = 1;

    printEnemy();
}
void moveEnemy2()
{
    eraseEnemy2();            
    e2Y = e2Y + e2Dir;        

    if (e2Y >= 35)            
        e2Dir = -1;           
    if (e2Y <= 2)             
        e2Dir = 1;         
    printEnemy2();          
}
void moveEnemy3() {
    eraseEnemy3();

    e3X = e3X + e3DirX; 
    e3Y = e3Y + e3DirY;  // move vertically

    if (e3X <= 2 || e3X >= 116) e3DirX *= -1;  // bounce horizontally
    if (e3Y <= 2 || e3Y >= 35) e3DirY *= -1;   // bounce vertically

    printEnemy3();
}



void printPlayer()
{
   
    gotoxy(pX, pY);
cout<<"        /\\          "<<endl;
gotoxy(pX , pY+1);
cout<<"       /# \\         "<<endl;
gotoxy(pX , pY+2);
cout<<"      /### \\        "<<endl;
gotoxy(pX , pY+3);
cout<<"    _/##### \\_      "<<endl;
gotoxy(pX , pY+4);
cout<<"   /  ||||||| \\     "<<endl;
gotoxy(pX , pY+5);
cout<<" /__  |||||||__ \\   "<<endl;
gotoxy(pX , pY+6);
cout<<"   |||||||||||||     "<<endl;
gotoxy(pX , pY+7);
cout<<"     |__| |__|       "<<endl;
gotoxy(pX , pY+8);
cout<<"      ^^   ^^        "<<endl;


}
void erasePlayer()
{
    
    gotoxy(pX, pY);

cout<<"               "<<endl;
gotoxy(pX , pY+1);
cout<<"               "<<endl;
gotoxy(pX , pY+2);
cout<<"               "<<endl;
gotoxy(pX , pY+3);
cout<<"               "<<endl;
gotoxy(pX , pY+4);
cout<<"               "<<endl;
gotoxy(pX , pY+5);
cout<<"               "<<endl;
gotoxy(pX , pY+6);
cout<<"               "<<endl;
gotoxy(pX , pY+7);
cout<<"               "<<endl;
gotoxy(pX , pY+8);
cout<<"               "<<endl;
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void movePlayerLeft() 
{
 if (getCharAtxy(pX - 1, pY) == ' ')
{ erasePlayer();
 pX = pX - 1 ;
printPlayer();} 
}

void movePlayerRight() 
{
    if (getCharAtxy(pX + 23, pY) == ' ')
 {erasePlayer();
 pX = pX + 1;
 printPlayer();} 
}
void displayScore()
{
    gotoxy(119, 2); 
    cout << "Score: " << score << "   "; 
}
void printScoreBox()
{
int boxX = 119, boxY = 0; 
    gotoxy(boxX, boxY);     cout << "===========";
    gotoxy(boxX, boxY + 1); cout << "|         |";
    gotoxy(boxX, boxY + 2); cout << "|         |";
    gotoxy(boxX, boxY + 3); cout << "===========";
}






