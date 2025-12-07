#include<iostream>
using  namespace std;
float CalculateStayPrice(string month , int numOfdays);
int main()
{
    double studioRate, apartmentRate; 
    string month;
    int nights;
    cout<<"Enter the month:";
    cin >> month;
    cout<<"ENTER the number of nights:";
    cin >> nights;

   

    if (month == "May" || month == "October")
    {
        studioRate = 50;
        apartmentRate = 65;
     } 
    else if (month == "June" || month == "September")
    {
        studioRate = 75.20;
        apartmentRate = 68.70;
    } 
    else 
    { 
        studioRate = 76;
        apartmentRate = 77;
    }


    double studioPrice = studioRate * nights;
    double apartmentPrice = apartmentRate * nights;

     if (month == "May" || month == "October")
         { 
          if (nights > 14) {studioPrice = studioPrice * 0.7;} // 30 discount , check higher discount first other both will be applied.
         else if (nights > 7) {studioPrice = studioPrice * 0.95;} // 5 percent ka discont
         }
    if (month == "June" || month == "September")
        {
          if (nights > 14){ studioPrice = studioPrice *0.8;}
        }
         

    if (nights > 14)
        {
             apartmentPrice = apartmentPrice * 0.9;
        }

    cout << "Apartment Price: " << apartmentPrice << "$." << endl;
    cout << "Studio Price: " << studioPrice << "$." << endl;

    return 0;
}










   






















































