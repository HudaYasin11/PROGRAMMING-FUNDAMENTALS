#include<iostream>
using namespace std;
void printTable(int num);
int main()
{  
   int a;
   cout<<"Enter the table to be printed:";
   cin>> a;
   printTable(a);
}

   void printTable(int num)
   {
    for (int i =1; i<=10; i++)
   {
    cout<< num <<" x "<< i <<" = " << num * i<<endl;
   }
}


