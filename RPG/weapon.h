#include <iostream>
#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
public:
	Weapon(int);
	Weapon(string, double);

	// Mutators and Accessors
	void setName(string n) { name = n; }
	string getName() const { return name; }
	double getDamage() const { return damage; }
	string getRarity() const;

private:
	string name;
	double damage;
	int rarity;
	
	// Used for constructors only.
	void random_name(int);
	void random_damage(int);

};

#endif
