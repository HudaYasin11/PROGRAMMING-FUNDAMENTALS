#include<iostream>
using namespace std;
main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
cout<<"Enter 15 numbers one at a time:";
cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10 >> n11 >> n12 >> n13 >> n14 >> n15;
int sum_first5 = n1 + n2 + n3 + n4 + n5;
int product_next5 = n6 * n7 * n8 * n9 * n10;
int subtract_last5 = n11 - n12 - n13 - n14 - n15;
int result = (sum_first5 + product_next5) - subtract_last5;
cout << "Final result: " << result << endl;
}