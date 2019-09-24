#include <iostream>
#include <Monster.h>
//#include <weapon.h>
#include <functions.h>
#include <character.h>
#include <windows.h>
#include <MMsystem.h>

using namespace std;
void startScreen();

int main()
{
	startScreen();

	cout << "Welcome to the dungeon..." << endl;

	Character Hero(100,1);

	Monster Ninja(200, 10, "Ninja");
	Ninja.printStats();

	return 0;
}
