#include<iostream>
using namespace std;
void flowerShop( int redRose , int whiteRose, int tulips);
main()
{
int R, W , T ;
cout<<"Enter number of red roses:"<<endl;
cin>> R;
cout<<"Enter number of white roses:"<<endl;
cin>> W;
cout<<"Enter number of tulips:"<<endl;
cin>> T;
 flowerShop( R , W, T);
}
void flowerShop( int redRose , int whiteRose, int tulips)
{
float sum, discount;
float price1,price2 ,price3;
price1 =  redRose* 20.00 ;
price2 = whiteRose  * 4.10;
price3= tulips * 2.50;
sum = price1 + price2 + price3;
cout<<"The original price is:"<<sum;
if(sum>200)
{discount = sum * 20/100;}
cout<<"The discounted price is:"<<discount;
if( sum<200)
{cout<<"NO DISCOUNT APPLIED";}
}