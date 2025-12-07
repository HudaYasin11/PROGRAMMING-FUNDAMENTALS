#include<iostream>
using namespace std;
void discount(int purchase);
main()
{
string day;
float purchase_amount;
cout<<"Enter the day of week";
cin>>day;
cout<<"Enter the total purchase amount";
cin>>purchase_amount;
if(day=="Friday")
discount(purchase_amount);
else{ cout<<"no discount applied";}
}
void discount(int purchase)
{

float payable_amount = purchase * 0.9; //give 10 percent discount
cout<<"The payable amount is"<< payable_amount;
}