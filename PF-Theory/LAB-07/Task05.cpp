#include<iostream>
using namespace std;
int main()
{
    int number_of_days;
    cout<<"Enter days:";
    cin>>number_of_days;
    int doctors = 7;
    int treated = 0;
    int untreated = 0;
    for(int day = 1 ; day<= number_of_days ; day++)
    {
     int patients;
     cout << "Enter number of patients for day" << day << " " <<endl;
     cin>>patients;
     cout << "Patients visited on day" << day << ":" << patients << " " << endl;
     if (day % 3 == 0) 
    {
          if (untreated > treated) 
            {
                doctors++;  
            }
        }
        if (patients <= doctors)
        {
            treated = treated + patients;
        }
         else
        {
            treated = treated + doctors;
            untreated = untreated + (patients - doctors);
        }
    }

    cout << "Treated patients: " << treated<<endl;
    cout << "Untreated patients: " << untreated<<endl;

    return 0;
}
