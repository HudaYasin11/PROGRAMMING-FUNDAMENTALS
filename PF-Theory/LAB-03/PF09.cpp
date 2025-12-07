 #include<iostream>
using namespace std;
main()
{
system("color 72");
int num,sum;
cout<<"Enter a 4 digit number";
cin>>num;
sum = (num%10) + (num/10 %10) + (num/100 %10) + (num/1000 %10);
cout<<"The sum of the 4 digits  is:"<<sum;
}








