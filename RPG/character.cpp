#include <iostream>
#include <string>
#include "character.h"

using namespace std;


Character::Character(int a, int b)
{
	setHealth(a);
	setLevel(b);
}

void Character::setHealth(int h)
{
	health = h;
}

void Character::setLevel(int l)
{
	level = l;
}
void Character::addHealth()
{
	++health;
}
void Character::subHealth()
{
	--health;
}

void Character::addLevel()
{
	++level;
}
