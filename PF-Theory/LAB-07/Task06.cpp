#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the number of cargo:";
    cin >> n;

    double totalCargo = 0;
    double minibusCargo = 0;
    double truckCargo = 0;
    double trainCargo = 0;
    double totalPrice = 0;

    for (int i = 1; i <= n; i++) 
    {
        double weight;
        cout<<"Enter weight"<<i <<":";
        cin >> weight;
        totalCargo += weight;

        if (weight <= 3)
        {
            minibusCargo += weight;
            totalPrice += weight * 200;
        }
        else if (weight <= 11) {
            truckCargo += weight;
            totalPrice += weight * 175;
        }
        else {
            trainCargo += weight;
            totalPrice += weight * 120;
        }
    }

    double averagePrice = totalPrice / totalCargo;
    double minibusPercent = (minibusCargo / totalCargo) * 100;
    double truckPercent   = (truckCargo / totalCargo) * 100;
    double trainPercent   = (trainCargo / totalCargo) * 100;

    cout << fixed << setprecision(2);
    cout << averagePrice << endl;
    cout << minibusPercent << "%" << endl;
    cout << truckPercent << "%" << endl;
    cout << trainPercent << "%" << endl;

    return 0;
}