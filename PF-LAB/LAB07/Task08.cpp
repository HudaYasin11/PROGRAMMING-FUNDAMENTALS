#include <iostream>
using namespace std;
int calculateMoney(int age, int Machineprice, int toyPrice);
int main()
 {
    int age, machineprice, toyPrice;
    cout<<"Enter age:"; 
    cin >> age;
    cout<<"Enter machine price:"; 
    cin>> machineprice;
    cout<<"enter toy price:"; 
    cin>> toyPrice;
    int savings = calculateMoney(age, machineprice, toyPrice);
    if(savings >= machineprice) 
    {cout << "Yes!\n" << savings - machineprice << endl;}
    else 
    {cout << "No!\n" << machineprice - savings << endl;}
    return 0;
}

int calculateMoney(int age, int Machineprice, int toyPrice) 
{
    int money = 0, toys = 0;
    for(int i=1; i<=age; i++)
    {
        if(i % 2 == 0)
        { money = money + (i/2)*10 - 1; }      //calculation wrt birthday
        else
        {toys++;}
    }
    money = money + toys * toyPrice;
    return money;
}

