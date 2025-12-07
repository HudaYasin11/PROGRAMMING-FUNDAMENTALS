#include<iostream>
using namespace std;
void discount( string Country, float price);
main()
{
string name;
float ticket_price;
cout<<"Enter country name:";
cin>> name;
cout<<"Enter original ticket price";
cin>>ticket_price;
cout<< "Original Price" <<ticket_price<<endl;
discount( name , ticket_price);
}
void discount( string Country, float price)
{
if( Country == "Pakistan") {price = price* 0.95;}
if( Country=="Ireland") {price = price* 0.90; }
if( Country=="India") {price = price* 0.80; }
if( Country=="England") {price = price* 0.70; }
if( Country=="Canada") {price = price* 0.55; }
cout<<" PRICE after Discount:"<< price<<endl; 
}