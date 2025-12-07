#include<iostream>
using namespace std;
float calculateAverage();
string calculateGrade(float percentage);
 float marksEnglish , marksMaths, marksChemistry, marksSocialScience,marksBiology;
int main()
{
   
string studentName;
cout<<"Enter Student Name:"<<endl;
getline(cin ,studentName );
 
cout<<"Enter english marks:";
cin>> marksEnglish;
cout<<"Enter maths marks:";
cin>> marksMaths;
cout<<"Enter Chemistry marks:";
cin>> marksChemistry;
cout<<"Enter SocialScience marks:";
cin>> marksSocialScience;
cout<<"Enter Biology marks:";
cin>> marksBiology;
float total =  marksEnglish +  marksMaths + marksChemistry + marksSocialScience + marksBiology;
float percentage = (total/ 500.0 ) * 100;
cout<<"Percentage is:"<< percentage<<endl;
string grade = calculateGrade( percentage);
cout<<"The grade is :"<< grade<<endl;
float average = calculateAverage();
cout<<"The average marks is:"<< average;
}
string calculateGrade( float percentage)
{
if (percentage >= 90 && percentage <= 100)
        return "A+";
    else if (percentage >= 80 && percentage < 90)
        return "A";
    else if (percentage >= 70 && percentage < 80)
        return "B+";
    else if (percentage >= 60 && percentage < 70)
        return "B";
    else if (percentage >= 50 && percentage < 60)
        return "C";
    else if (percentage >= 40 && percentage < 50)
        return "D";
    else
        return "F";
}

float calculateAverage()
{
int total =  marksEnglish +  marksMaths + marksChemistry + marksSocialScience + marksBiology;
float average = (total/ 5.0 );
return average;

}



