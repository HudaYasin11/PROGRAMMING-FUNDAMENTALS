#include <iostream>
#include <string>
using namespace std;
float calculateDamage(string a, string b, float attack, float defense);
int main()
 {
string type1, type2;
float attack, defense;

cout << "Enter your type: ";
cin >> type1;
cout << "Enter opponent's type: ";
cin >> type2;
cout << "Enter your attack power: ";
cin >> attack;
cout << "Enter opponent's defense: ";
cin >> defense;
float result = calculateDamage(type1, type2, attack, defense);
cout << "Damage caused: " << result << endl;
return 0;
}
float calculateDamage(string a, string b, float attack, float defense) {
float effectiveness;
if (a == b)
effectiveness = 0.5;
else if ((a == "fire" && b == "grass") || 
(a == "water" && b == "fire") || 
(a == "grass" && b == "water") || 
 (a == "electric" && b == "water"))
effectiveness = 2.0;
 else if ((a == "fire" && b == "water") || 
(a == "water" && b == "grass") || 
(a == "water" && b == "electric") || 
(a == "grass" && b == "fire"))
effectiveness = 0.5;
  else
effectiveness = 1.0;

    float damage = 50 * (attack / defense) * effectiveness;
    return damage;
}
