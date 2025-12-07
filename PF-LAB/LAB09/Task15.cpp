#include<iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);
int main()
{
int n1=2,n2;
int array1[n1];
for (int i=0; i<n1; i++)
{cin>>array1[i];}
cout<<"Enter number of digits for second array";
cin>>n2;
int array2[n2];

for (int i=0; i<n2; i++)
{cin>>array2[i];}
insertArrayInMiddle( array1, n1 ,array2,n2 );
}

void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
for(int i=0; i<firstArraySize;i++)
{
    if(i == 1)
    {
        for (int j = 0; j<secondArraySize;j++)
        {cout << secondArray[j]<<" ";}
    }
    cout<<firstArray[i]<<"";

}

}

