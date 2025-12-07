#include<iostream>
using namespace std;
main()
{
system("color 80");
float i,p,chance_of_being_IMPOSTER;
cout<<"Enter IMPOSTER count:";
cin>>i;
cout<<"Enter PLAYER count:";
cin>>p;
chance_of_being_IMPOSTER= 100*(i/p);
cout<<"The chance of being imposter is:"<<chance_of_being_IMPOSTER<<"%";
}
