//include the necessary header files
#include "Character.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


//implement constructors
Character::Character() {
	occupation = "Cabbage Merchant";
	race = "Human";
	gender = 'M';
}

Character::Character(string occTemp, string raceTemp, char genderTemp) {
	occupation = occTemp;
	race = raceTemp;
		gender = genderTemp;
}


//implement getter functions
string Character::getOccupation() {
	return occupation;
}

string Character::getRace() {
	return race;
}

char Character::getGender() {
	return gender;
}

//implement setter functions
void Character::setOccupation(string newOcc) {
	occupation = newOcc;
}

void Character::setRace(string newRace) {
	race = newRace;
}

void Character::setGender(char newGender) {
	gender = newGender;
}

//implement overloaded operator function

bool Character::operator==(const Character& c1) {
	if ((race == c1.race) && (gender == c1.gender))
	{
		return true;
	}
	else
		return false;
} 

//implement stats function
void Character::stats() {
	cout << "Occupation: " << getOccupation() << endl;
	cout << "Race: " << getRace() << endl;
	cout << "Gender: " << getGender() << endl;
}