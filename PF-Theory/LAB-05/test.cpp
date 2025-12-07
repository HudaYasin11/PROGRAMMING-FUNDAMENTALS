#include <iostream>
#include <windows.h>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
using namespace std;

// ===== Function Declarations =====
void printMaze();
void gotoxy(int x, int y);
void printEnemyAt(int x, int y);
void eraseEnemyAt(int x, int y);
void moveEnemies();
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
char getCharAtxy(short int x, short int y);
void spawnBonus();
void printScore();

// ===== Global Variables =====
int e1X = 4,  e1Y = 8,  e1Dir = 1;   // horizontal
int e2X = 20, e2Y = 5,  e2Dir = 1;   // vertical
int e3X = 40, e3Y = 10, e3DX = 1, e3DY = 1;  // diagonal

const int LEFT_BOUND = 2;
const int RIGHT_BOUND = 72;
const int TOP_BOUND = 1;
const int BOTTOM_BOUND = 25;

int pX = 4, pY = 22;   // Player
int bonusX, bonusY;
int score = 0;

// ===== MAIN =====
int main()
{
    srand(time(0)); // seed for random bonus spawn

    system("cls");
    printMaze();
    printPlayer();
    printEnemyAt(e1X, e1Y);
    printEnemyAt(e2X, e2Y);
    printEnemyAt(e3X, e3Y);
    spawnBonus();
    printScore();

    while (true)
    {
        // ===== Player movement =====
        if (GetAsyncKeyState(VK_LEFT))
            movePlayerLeft();
        if (GetAsyncKeyState(VK_RIGHT))
            movePlayerRight();

        // ===== Enemy movement =====
        moveEnemies();

        // ===== Check bonus collection =====
        if (pY <= bonusY + 1 && pY + 8 >= bonusY && pX <= bonusX && pX + 20 >= bonusX)
        {
            score += 10;
            spawnBonus();
            printScore();
        }

        Sleep(100);
    }
}

// ===== Maze & Helpers =====
void printMaze()
{
    cout << "#######################################################################################" << endl;
    for (int i = 0; i < 25; i++)
        cout << "#                                                                                     #" << endl;
    cout << "#######################################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

// ===== Enemy =====
void printEnemyAt(int x, int y)
{
    gotoxy(x, y);     cout << "   ^^^^^^^   ";
    gotoxy(x, y + 1); cout << " ^-|* = *|-^ ";
    gotoxy(x, y + 2); cout << "   |||||||   ";
    gotoxy(x, y + 3); cout << " (~~~) (~~~) ";
}

void eraseEnemyAt(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        gotoxy(x, y + i);
        cout << "             ";
    }
}

void moveEnemies()
{
    // Enemy 1 → Horizontal
    eraseEnemyAt(e1X, e1Y);
    e1X += e1Dir;
    if (e1X <= LEFT_BOUND) { e1X = LEFT_BOUND; e1Dir = 1; }
    if (e1X >= RIGHT_BOUND) { e1X = RIGHT_BOUND; e1Dir = -1; }
    printEnemyAt(e1X, e1Y);

    // Enemy 2 → Vertical
    eraseEnemyAt(e2X, e2Y);
    e2Y += e2Dir;
    if (e2Y <= TOP_BOUND + 1) { e2Y = TOP_BOUND + 1; e2Dir = 1; }
    if (e2Y >= BOTTOM_BOUND - 5) { e2Y = BOTTOM_BOUND - 5; e2Dir = -1; }
    printEnemyAt(e2X, e2Y);

    // Enemy 3 → Diagonal
    eraseEnemyAt(e3X, e3Y);
    e3X += e3DX;
    e3Y += e3DY;
    if (e3X <= LEFT_BOUND) { e3X = LEFT_BOUND; e3DX = 1; }
    if (e3X >= RIGHT_BOUND) { e3X = RIGHT_BOUND; e3DX = -1; }
    if (e3Y <= TOP_BOUND + 1) { e3Y = TOP_BOUND + 1; e3DY = 1; }
    if (e3Y >= BOTTOM_BOUND - 5) { e3Y = BOTTOM_BOUND - 5; e3DY = -1; }
    printEnemyAt(e3X, e3Y);
}

// ===== Player =====
void printPlayer()
{
    gotoxy(pX, pY);
    cout << "        /\\          " << endl;
    gotoxy(pX, pY + 1);
    cout << "       /# \\         " << endl;
    gotoxy(pX, pY + 2);
    cout << "      /### \\        " << endl;
    gotoxy(pX, pY + 3);
    cout << "    _/##### \\_      " << endl;
    gotoxy(pX, pY + 4);
    cout << "   /  ||||||| \\     " << endl;
    gotoxy(pX, pY + 5);
    cout << " /__  |||||||__ \\   " << endl;
    gotoxy(pX, pY + 6);
    cout << "   |||||||||||||     " << endl;
    gotoxy(pX, pY + 7);
    cout << "     |__| |__|       " << endl;
    gotoxy(pX, pY + 8);
    cout << "      ^^   ^^        " << endl;
}

void erasePlayer()
{
    for (int i = 0; i < 9; i++)
    {
        gotoxy(pX, pY + i);
        cout << "                     ";
    }
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize = {1, 1};
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect)
               ? ci.Char.AsciiChar
               : ' ';
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX -= 1;
        printPlayer();
    }
}

void movePlayerRight()
{
    if (getCharAtxy(pX + 23, pY) == ' ')
    {
        erasePlayer();
        pX += 1;
        printPlayer();
    }
}

// ===== Bonus & Score =====
void spawnBonus()
{
    bonusX = 10 + rand() % 60;
    bonusY = 5 + rand() % 15;
    gotoxy(bonusX, bonusY);
    cout << "*"; // bonus pill
}

void printScore()
{
    gotoxy(5, 0);
    cout << "Score: " << score << "   ";
}
