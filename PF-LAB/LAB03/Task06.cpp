#include<iostream>
using namespace std;
 main()
{
system("color 3F");
int megabytes,KB_in_MB,Bytes_in_KB,Bits_in_Bytes,bits;
cout<<"Enter value in Megabytes(MB)";
cin>>megabytes;
KB_in_MB=1024;
Bytes_in_KB=1024;
Bits_in_Bytes=8;
bits=megabytes * KB_in_MB * Bytes_in_KB * Bits_in_Bytes ;
cout<<"Number of bits are "<<bits;
}

