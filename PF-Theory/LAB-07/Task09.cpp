#include <iostream>
using namespace std;
int topTriangle(int rows);
int bottomTriangle(int rows);
int main()
{
    system("color 4");10

int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    topTriangle(rows);
    bottomTriangle(rows);
    return 0;
}

int topTriangle(int rows)
{    
    for (int i = 1; i <= rows; i++)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        
        }
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
   int bottomTriangle(int rows)
{
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }


}

