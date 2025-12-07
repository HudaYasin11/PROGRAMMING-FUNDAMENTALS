#include<iostream>
using namespace std;
main()
{
float bag_size,bag_cost,area;
cout<<"Enter the bag size in pounds(lb):";
cin>>bag_size;
cout<<"Enter the bag cost(Rs)";
cin>>bag_cost;
cout<<"Enter area covered by the bag(sqft)";
cin>>area;
float cost_per_pound = bag_cost/ bag_size;
float cost_per_sqft=  bag_cost/area;
cout<<"The cost of fertilizer bag per pound"<< cost_per_pound <<endl;
cout<<"The cost of fertilizing per area"<< cost_per_sqft<<endl;
}