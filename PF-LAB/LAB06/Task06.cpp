#include<iostream>
using namespace std;
float discount( string purchaseDay, string purchaseMonth, float purchaseAmount);
int main()
{
    string day,month;
    float amount;
cout<<"Enter the purchase day:";
cin>> day;
cout<<"Enter the purchase month:";
cin>> month;
cout<<"Enter the purchase amount:";
cin>> amount;


cout<<"The payable amount is :"<<discount( day, month , amount);

}
float discount( string purchaseDay, string purchaseMonth, float purchaseAmount)
{
float payableAmount =  purchaseAmount;
if( purchaseDay == "Sunday" || purchaseMonth == "October")
{payableAmount = payableAmount * 0.90;}
return payableAmount;
}
