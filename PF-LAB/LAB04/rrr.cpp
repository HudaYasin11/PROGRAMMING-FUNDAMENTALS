#include<iostream>
using namespace std;
void check(int a);
void marks(int a);
main()
{  int b;
 cout<< "enter marks: "; cin>> b;
if (b>50){check(b);}
if (b<50){marks(b);}
}
void check(int a)
{cout<< "pass";}
void marks(int a)
{cout<< "fail";}