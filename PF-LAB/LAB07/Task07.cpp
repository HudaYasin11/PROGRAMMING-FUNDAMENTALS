#include<iostream>
using namespace std;
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter count of numbers: ";
    cin >> n;
    int p1=0, p2=0, p3=0, p4=0, p5=0, num;

for(int i=0; i<n; i++) 
    { 
        cout<<"enter the number:";
        cin >> num;
        if(num < 200) p1++;
        else if(num < 400) p2++;
        else if(num < 600) p3++;
        else if(num < 800) p4++;
        else p5++;
    }

    cout << fixed << setprecision(2);
    cout << (p1*100.0/n) << "%\n";
    cout << (p2*100.0/n) << "%\n";
    cout << (p3*100.0/n) << "%\n";
    cout << (p4*100.0/n) << "%\n";
    cout << (p5*100.0/n) << "%\n";
    return 0;
}

