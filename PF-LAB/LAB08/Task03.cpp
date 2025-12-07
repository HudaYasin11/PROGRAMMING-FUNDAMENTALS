#include <iostream>
#include <string>
using namespace std;
string plant(string seed, int water, int fert, int temp);
int main() {
string seed;
int water, fert, temp;
cout << "Enter seed: ";
cin >> seed;
cout << "Enter water: ";
cin >> water;
cout << "Enter fertilizer: ";
cin >> fert;
cout << "Enter temperature: ";
cin >> temp;
cout << plant(seed, water, fert, temp);
}
string plant(string seed, int water, int fert, int temp) {
string stem = string(water, '-');
string flowers = string(fert, seed[0]);
string result = "";
if (temp >= 20 && temp <= 30) {
for (int i = 0; i < water; i++)
result += stem + flowers;
return result;
}
 else 
 {
 return string(water * 3, '-') + seed;
}
}
