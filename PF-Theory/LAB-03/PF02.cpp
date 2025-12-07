#include<iostream>
using namespace std;
main()
{
int  FPS , min,Number_of_frames;
cout<<"Enter Number of frames per second";
cin>>FPS;
cout<<"Enter number of min";
cin>>min;
Number_of_frames= min * 60 * FPS;
cout<<"Total number of frames per second:"<<Number_of_frames;
}