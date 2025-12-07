#include<iostream>
using namespace std;
bool isPrime(int n);
int primeNumbers(int n);
int main(){
int n;
cout<<"Enter number:";
cin>>n;
cout<<primeNumbers(n);
}
bool isPrime(int n){
if(n<2)return false;
for(int i=2;i*i<=n;i++)
if(n%i==0)return false;
return true;
}
int primeNumbers(int n){
int count=0;
for(int i=2;i<=n;i++)
if(isPrime(i))count++;
return count;
}
