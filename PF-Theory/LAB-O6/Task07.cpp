#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int examHour, examMin;
    int arriveHour, arriveMin;
    string status;

    cout << "Enter exam start hour: ";
    cin >> examHour;
    cout << "Enter exam start minutes: ";
    cin >> examMin;
    cout << "Enter arrival hour: ";
    cin >> arriveHour;
    cout << "Enter arrival minutes: ";
    cin >> arriveMin;
    if (arriveHour > examHour)
    {status = "Late";}
    else if (arriveHour < examHour)
        {status = "Early";}
    else
    {
        if (arriveMin > examMin)
           { status = "Late";}
        else if (examMin - arriveMin > 30)
           { status = "Early";}
        else
           { status = "On time";}
    }

    cout << status << endl;

int examTime = examHour * 60 + examMin;
    int arriveTime = arriveHour * 60 + arriveMin;


    int diff = arriveTime - examTime;  
 
    int absDiff = abs(diff);     
    int hours = absDiff / 60;    
    int minutes = absDiff % 60;  
    if( diff > 0 )
    cout << "You arrived " << hours << " hour(s) and " << minutes << " minute(s) AFTER START ." << endl;

    if( diff < 0 )
   cout << "You arrived " << hours << " hour(s) and " << minutes << " minute(s) BEFORE START." << endl;

   if(diff == 0)
   cout<<"You are on time"<<endl;
return 0;
}