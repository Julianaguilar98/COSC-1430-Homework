//include the necessary header files!
#include "Protagonist.h"
#include "Weapon.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//implement constructors
Protagonist::Protagonist() {
	type = "Warrior";
	age = 25;
}

Protagonist::Protagonist(string typeTemp, int ageTemp) {
	type = typeTemp;
	age = ageTemp;
}

//getter functions
string Protagonist::getType() {
	return type;
}
int Protagonist::getAge() {
	return age;
}
string Protagonist::getEquipment() {
	return equipment.getWeapon();
}

//implement setter functions
void Protagonist::setType(string newType) {
	type = newType;
}

void Protagonist::setAge(int newAge) {
	age = newAge;
}

void Protagonist::setEquipment(string newEqui) {
	equipment = newEqui;
}


//implement overloaded operator function
bool Protagonist::operator==(const Protagonist& p1) {
	if ((type == p1.type) && (age == p1.age) && (race == p1.race))
	{
		return true;
	}
	else
		return false;

//	return type == p1.type && age == p1.age; //&& equipment == p1.equipment
}

//bool Protagonist::operator==(const Character& c1) {
	//return Character::operator==(c1);
//}

//implement stats function
void Protagonist::stats() {
	cout << "Race: " << getRace() << endl;
	cout << "Gender: " << getGender() << endl;
	cout << "Class: " << getType() << endl;
	equipment.stats();
	cout << "Age: " << getAge() << endl;
}