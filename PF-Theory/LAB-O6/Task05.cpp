#include<iostream>
using namespace std;
float calculatePrice( string fruitName, string weekday , float quantity);
int main()
{
string value1, value2;
float value3;
cout<<"enter fruit name:"<<endl;
cin>>value1;
cout<<"enter day of the week:"<<endl;
cin>>value2;
cout<<"Enter the quantity required:"<<endl;
cin>>value3;

float totalPrice = calculatePrice( value1 , value2, value3);
cout<<"TOTAL PRICE is:"<< totalPrice;

}
 float calculatePrice( string fruitName, string weekday , float quantity)
{
    float price;
    if(weekday == "Monday" || weekday == "Tuesday" || weekday == "Wednesday" || weekday == "Thursday" || weekday == "Friday")
    {
if( fruitName == "banana" ) {price = quantity * 2.50;}
else if (fruitName == "apple" ) {price = quantity * 1.20;}
else if (fruitName == "orange" ) {price = quantity * 0.85;}
else if (fruitName == "grapefruit" ) {price = quantity * 1.45;}
else if (fruitName == "kiwi" ) {price = quantity * 2.70;}
else if (fruitName == "pineapple" ) {price = quantity * 5.50;}
else if (fruitName == "grapes" ) {price = quantity * 3.85;}
else {cout<<"invalid input";}
   return price;
}
     else
{
 if( fruitName == "banana" ) {price = quantity * 2.70;}
else if (fruitName == "apple" ) {price = quantity * 1.25;}
else if (fruitName == "orange" ) {price = quantity * 0.90;}
else if (fruitName == "grapefruit" ) {price = quantity * 1.60;}
else if (fruitName == "kiwi" ) {price = quantity * 3.00;}
else if (fruitName == "pineapple" ) {price = quantity * 5.60;}
else if (fruitName == "grapes" ) {price = quantity * 4.20;}
 else {cout<<"invalid input";}
    return price;   
}
}