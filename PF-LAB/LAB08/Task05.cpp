#include<iostream>
#include<string>
using namespace std;
bool isPrime(int n);
string howBad(int n);
int main(){
int n;
cout<<"Enter number:";
cin>>n;
cout<<howBad(n);
}
bool isPrime(int n){
if(n<2)return false;
for(int i=2;i*i<=n;i++)
if(n%i==0)return false;
return true;
}
string howBad(int n){
int count=0;
while(n>0){
if(n%2==1)count++;
n/=2;
}
string result="";
if(count%2==0)result+="Evil";
else result+="Odious";
if(isPrime(count)){
if(!result.empty())result+=", ";
result+="Pernicious";
}
return result;
}
