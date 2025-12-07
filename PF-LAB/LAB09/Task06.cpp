#include<iostream>
using namespace std;
int main()
{
int sum = 0;
float average = 0;
int numbers[5] = {1,2,3,4,5};
for(int idx=0; idx<5; idx++)
{
    sum = sum + numbers[idx];

}
cout<<"sum is:"<<sum<<endl;
average = sum/5;
cout<<average;
}