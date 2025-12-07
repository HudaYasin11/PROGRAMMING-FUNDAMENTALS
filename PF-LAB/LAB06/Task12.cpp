#include <iostream>
#include <string>
using namespace std;
float totalIncome(string type, int rows, int columns);
int main()
 {
string screeningType;
int r, c;
cout << "Enter screening type (Premiere/Normal/Discount):";
cin >> screeningType;
cout << "Enter number of rows:";
cin >> r;
cout << "Enter number of columns:";
cin >> c;
float income = totalIncome(screeningType, r, c);
cout << "Total income from a full hall: " << income << endl;
return 0;
}
float totalIncome(string type, int rows, int columns)
{
float price;
 if (type == "Premiere") { price = 12.00;} 
 else if (type == "Normal") { price = 7.50;} 
 else if (type == "Discount") { price = 5.00;} 
 else {cout << "Invalid screening type!";}
 float income = (rows * columns) * price;
 return income;
}
