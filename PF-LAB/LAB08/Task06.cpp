#include<iostream>
using namespace std;
int pileCubes(long long m);
int main(){
long long m;
cout<<"Enter total volume:";
cin>>m;
cout<<pileCubes(m);
}
int pileCubes(long long m){
long long sum=0;
int n=0;
while(sum<m){
n++;
sum+=1LL*n*n*n;
if(sum==m)return n;
}
return -1;
}
