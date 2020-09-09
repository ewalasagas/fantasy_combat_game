#include "Character.hpp"
#include "BlueMen.hpp"
#include <string>
#include <iostream>
using namespace std;

BlueMen::BlueMen()
	{	}

string BlueMen::getName()
	{
		return this->name;
	}


void BlueMen::setAttack()
	{
		attack = rand() % attackDice + 1;	//2-d10 attack
		attack = attack * attackDiceCount;
		cout << "Blue Men rolls attack of " << attack << endl;
	}

int BlueMen::getAttack()
	{
		return attack;
	}


void BlueMen::setDefense()
	{
		defense = rand() % defenseDice + 1;	//3-d6 defense
		defense = defense * defenceDiceCount;
		cout << "Defense dice: " << defenceDiceCount << endl;
		cout << "Blue Men rolls defense of " << defense << endl;
	}

int BlueMen::getDefense()
	{
		return defense;
	}

int BlueMen::get_strengthPoints()
	{
		return this->strengthPoints;
	}

void BlueMen::set_damage(int attack)
	{
		damage = attack - (this->getDefense() + this->armor);		//If attack is less than BlueMen's defense + armor, no damage recieved
		if (damage < 0)
		{
			damage = 0;
			cout << "Blue Men receives no damage." << endl;
		}
		else
			cout << "Blue Men recieves " << damage << " damage" << endl;
		strengthPoints = strengthPoints - damage;
		defenceDiceCount = 3 - ((12 - strengthPoints) / 4);
	}

int BlueMen::get_damage()
	{
		return damage;
	}	//Return armor integer

int BlueMen::getArmor()
	{
		return this->armor;
	}

BlueMen::~BlueMen()
{	}