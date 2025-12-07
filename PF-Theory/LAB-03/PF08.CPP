#include<iostream>
using namespace std;
int main()
{
float veg_price_kg, fruit_price_kg;
int total_kg_of_veg, total_kg_of_fruit;
cout<<"Enter veg price in kg(coins):";
cin>>veg_price_kg;
cout<<"Enter fruit price in kg(coins):";
cin>>fruit_price_kg;
cout<<"Enter total kg of veg:";
cin>>total_kg_of_veg;
cout<<"Enter total kg of fruits:";
cin>>total_kg_of_fruit;
 float earning_coins = (veg_price_kg * total_kg_of_veg) + (fruit_price_kg * total_kg_of_fruit);
 float earning_rupees = earning_coins / 1.94;
 cout<<"THE TOTAL EARNING IN RUPEES IS:"<<earning_rupees;
}