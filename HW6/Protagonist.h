#ifndef PROTAGONIST_H
#define PROTAGONIST_H
//include weapon header file
#include "Weapon.h"
#include "Character.h"
#include <fstream>

#include <iostream>
#include <string>
using namespace std;

/*syntax to make class Protagonist derived from class Character*/
class Protagonist : public Character{ 
public:
//constructors
	Protagonist();
	Protagonist(string typeTemp, int ageTemp);

//getter functions
	string getType();
	int getAge();
	string getEquipment();
//setter functions
	void setType(string); //Type is used somewhere else FYI
	void setAge(int);
	void setEquipment(string);

//overloaded operator function
    bool operator==(const Protagonist & p1);
   // bool operator==(const Character & c1);


	//stats function
	void stats();
private:
//variables
	int age;
	Weapon equipment;
protected:
//variable
	string type;
};

#endif