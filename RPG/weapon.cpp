#include <iostream>
#include <fstream>
#include <weapon.h>
using namespace std;


Weapon::Weapon(int scale)
{
	random_name(scale);
	random_damage(scale);
}

Weapon::Weapon(string n, double d): name(n), damage(d) { }

string Weapon::getRarity() {
	switch(rarity):
		case(1):
			return "Common";
		case(2):
			return "Rare";
		case(3):
			return "Legendary";
		default:
			return "UNKNOWN";
}		

void Weapon::random_name(int scale)
{
	// Create function to randomly choose a name within a text file.

	ifstream inFile("WeaponNames.txt");

	vector<string> weapon_types;

	return "filler_name";

}

// Randomizes the damage of the weapon based on dungeon scale, rarity, and random generator.
void Weapon::random_damage(int scale)
{
	damage = scale + rarity;
}
