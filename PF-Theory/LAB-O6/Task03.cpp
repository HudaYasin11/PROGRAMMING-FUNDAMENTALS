#include<iostream>
using namespace std;
string getZodiacSign( int day, int month);
int main()
{
int value1, value2;
cout<<"Enter day of ur birth (1-31)";
cin>> value1;
cout<< "Enter the birth month:";
cin>> value2;
string result = getZodiacSign (value1 , value2);
cout<<"Your zodiac sign is:"<< result;
}
string getZodiacSign( int day, int month)
{
string zodiac;

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        zodiac = "Aries (The Ram)";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        zodiac = "Taurus (The Bull)";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        zodiac = "Gemini (The Twins)";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        zodiac = "Cancer (The Crab)";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        zodiac = "Leo (The Lion)";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        zodiac = "Virgo (The Virgin)";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        zodiac = "Libra (The Scales)";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        zodiac = "Scorpio (The Scorpion)";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        zodiac = "Sagittarius (The Archer)";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        zodiac = "Capricorn (The Goat)";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        zodiac = "Aquarius (The Water Bearer)";
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        zodiac = "Pisces (The Fishes)";
    else
        zodiac = "Invalid input";

    return zodiac;
}




