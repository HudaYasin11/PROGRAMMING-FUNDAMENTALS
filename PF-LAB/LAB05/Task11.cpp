#include<iostream>
using namespace std;
void calculatePoolState(int V , int P1 , int P2 , float H);
int main()
{
int litre, flow1,flow2;
float hrs;

cout<<"Volume of the pool in litres [1- 10000]";
cin>> litre;
cout<<"Enter the flow rate of the first pipe[1-5000]:";
cin>>flow1;
cout<<"Enter the flow rate of the second pipe[1-5000]:";
cin>>flow2;
cout<<"Enter the hours the worker is absent[1.0 - 24.0]:";
cin>>hrs;
 calculatePoolState(litre , flow1 , flow2, hrs);
 return 0;
}
void calculatePoolState(int V,int P1,int P2,float H)
{
float totalWater = (P1 + P2) * H;


    if (totalWater <= V)
    {
        int percentFull = (totalWater / V) * 100;
        int pipe1Percent = ((P1 * H) / totalWater)* 100;
        int pipe2Percent = (((P2 * H) / totalWater) * 100);

        cout << "The pool is " << percentFull << "% full. ";
        cout << "Pipe 1: " << pipe1Percent << "%. ";
        cout << "Pipe 2: " << pipe2Percent << "%." << endl;
    }
    else 
    {
        float overflow = totalWater - V;
        cout << "For " << H << " hours the pool overflows with " << overflow << " liters." << endl;
    }




}