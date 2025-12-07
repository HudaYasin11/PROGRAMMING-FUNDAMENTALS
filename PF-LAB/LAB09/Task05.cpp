#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of elements:";
    cin>>num;
    int value[num];
    for(int count=0; count<num; count++)
    {
        cout<<"Enter the element:"<<endl;
        cin>>value[count];   
    }
    for(int i=0; i<num; i++)
    {
        cout<<"The value of element"<< value[i];
    }

    return 0;
}