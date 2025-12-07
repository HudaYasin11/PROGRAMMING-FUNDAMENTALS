#include<iostream>
using namespace std;
void printMenu();
void CalculateAggregate( string name, int matricMarks , int interMarks , int ecatMarks);
void compareMarks( string nameStd01, int ecatMarksStd01, string nameStd02, int ecatMarksStd02 );
main()
{
system("color 4");
printMenu();
int choice;
cin>>choice;
if( choice==1)
{
   string name;
   int matric , inter , ecat; 
   cout<<"Enter Name ,Matric marks , Inter marks & Ecat marks:"<<endl;
   cin>> name >> matric >> inter >> ecat;
   CalculateAggregate( name , matric , inter , ecat);
}
if(choice==2)
{
    string name01,name02;
   int marks01, marks02;
    cout<<"Enter name & marks of Student01:"<<endl;
    cin>> name01>> marks01;
    cout<<"Enter name  and marks of Student02:"<<endl;
    cin>> name02 >> marks02;
    compareMarks(name01, marks01,name02,marks02);
}
if(choice>=3)
 { 
   cout<<"INVALID CHOICE";
 }
if(choice<1)
  { 
cout<<"INVALID CHOICE";
}
}
void printMenu()
{ 
   cout<<"UNIVERSITY OF ENGINEERING & TECHNOLOGY, LAHORE:"<<endl;
   cout<<"Select One:"<<endl;
   cout<<"1. Calculate Aggregate"<<endl;
   cout<<"2.Compare Marks"<<endl;
}
void CalculateAggregate( string name, int matricMarks , int interMarks , int ecatMarks)
{
    float Aggregate = ( matricMarks / 1100.0 * 30 + interMarks / 1100.0 * 30 +  ecatMarks / 400.0 * 40);
    cout<<"Aggregate of "<< name << " is :"<< Aggregate<<endl;
}
void compareMarks( string nameStd01, int ecatMarksStd01, string nameStd02, int ecatMarksStd02 )
{
     if(ecatMarksStd01 > ecatMarksStd02)
     {
            cout<<"The 1ST roll number is awarded to:"<<nameStd01<<endl;
      }
     if(ecatMarksStd02 > ecatMarksStd01)
     { 
     cout<<"The 1ST roll number is awarded to:"<<nameStd02<<endl;
      }
}






