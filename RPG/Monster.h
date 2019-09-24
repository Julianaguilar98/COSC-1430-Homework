// Monster Class written by Julian Aguilar
#include <iostream>
#include <string>
using namespace std;

#ifndef MONSTER_H
#define MONSTER_H

class Monster {//: public Character {

public:
	//Monster(); // Probably dont want this. Always create object parameterized?
	 Monster(int Health, int Power, string identifier) { // identifier as in "Slime" or "Skeleton"
		setMonsterPower(Power);
		setMonsterHealth(Health);
		setIdentity(identifier);
	}

	 string MonsterName;
	int MonsterPower;
	int MonsterHealth;
	int MonsterIdentifier; //this is a number used to identify the name of monster created for ASCII art

	void setMonsterPower(int tempPower) {
	MonsterPower = tempPower;
}

	void setMonsterHealth(int tempHealth) {
		MonsterHealth = tempHealth;
	}

	void decreaseHealth(int decrease) { //health reduction
		MonsterHealth = MonsterHealth - decrease;
	}

	void setIdentity(string identity) { //Slime = 1, Skeleton = 2, Ninja = 3, Zombie = 4
		if (identity == "Slime"){
			MonsterIdentifier = 1;
		MonsterName = "Slime";
	}

		else if (identity == "Skeleton"){
			MonsterIdentifier = 2;
		MonsterName = "Skeleton";
	}

		else if (identity == "Ninja"){
			MonsterIdentifier = 3;
		MonsterName = "Ninja";
	}

		else if (identity == "Zombie") {
			MonsterIdentifier = 4;
			MonsterName = "Ninja";
		}
	}

	void printStats() {
		cout << "A " << MonsterName << " has appeared!" << endl;
		cout << "Health: " << MonsterHealth << endl;
		cout << "Power: " << MonsterPower << endl;
	}

};



#endif // !MONSTER_H
