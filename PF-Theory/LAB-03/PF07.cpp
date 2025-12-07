#include<iostream>
using namespace std;
main()
{
system("color 4");
string movie_name;
cout<<"Enter movie name";
getline(cin, movie_name);
int Adult_ticket_price, Child_ticket_price;
cout<<"Enter Adult Ticket Price";
cin>>Adult_ticket_price;
cout<<"Enter Child Ticket Price";
cin>>Child_ticket_price;
int Adult_sold,Child_sold;
cout<<"Enter the number of  Adult ticket sold";
cin>>Adult_sold;
cout<<"Enter the number of  Child ticket sold";
cin>>Child_sold;
float Total_Revenue = ( Adult_sold * Adult_ticket_price +  Child_sold  * Child_ticket_price);
float Charity;
cout<<"Enter the percentage amount to be donated";
cin>> Charity;
float Donation = (Charity/100)* Total_Revenue;
float Remaining_Revenue =Total_Revenue - Donation;
cout<<"The remaining revenue is:"<<Remaining_Revenue;
}