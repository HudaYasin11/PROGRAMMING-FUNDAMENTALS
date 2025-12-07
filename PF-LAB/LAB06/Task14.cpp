#include <iostream>
using namespace std;

int main() 
{
    double budget;
    string category;
    int people;
    cut<<"Your budget:";
    cin >> budget;
    cout<<"The category:";
    cin >> category;
    cout<<"number of people:";
    cin >> people;
    double transportPercent;
    if(people >= 1 && people <= 4) transportPercent = 0.75;
    else if(people >= 5 && people <= 9) transportPercent = 0.60;
    else if(people >= 10 && people <= 24) transportPercent = 0.50;
    else if(people >= 25 && people <= 49) transportPercent = 0.40;
    else transportPercent = 0.25;

    double transportCost = budget * transportPercent;
    double remainingBudget = budget - transportCost;

    double ticketPrice;
    if(category == "VIP") ticketPrice = 499.99;
    else ticketPrice = 249.99;

    double totalTicketCost = ticketPrice * people;

    if(remainingBudget >= totalTicketCost)
    {
        cout << "Yes! You have " << remainingBudget - totalTicketCost << " QR left" << endl;
    } else
    {
        cout << "Not enough money!. You need" << totalTicketCost - remainingBudget << " QR more" << endl;
    } 
    return 0;
}
