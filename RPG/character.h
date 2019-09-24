#ifndef CHARACTER_H
#define CHARACTER_H

using namespace std;

class Character
{
public:
	Character(int a, int b);
	void setHealth(int h);
	void setLevel(int l);
	void addHealth();
	void subHealth();
	void addLevel();
	int getHealth()
	{
		return health;
	}

	int getLevel()
	{
		return level;
	}
private:
	int health;
	int level;

};

#endif // CHARACTER_H
