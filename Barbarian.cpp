#include "Character.hpp"
#include "Barbarian.hpp"
#include <string>
#include <iostream>

Barbarian::Barbarian()
{	}

string Barbarian::getName()
	{
		return this->name;
	}


void Barbarian::setAttack()
	{
		attack = rand() % 6 + 1;	//2-d6 attack
		attack = attack * 2;
		cout << "Barbarian rolls attack of " << attack << endl;
	}

int Barbarian::getAttack()
	{
		return attack;
	}

void Barbarian::setDefense()
	{
		defense = rand() % 6 + 1;	//2-d6 defense
		defense = defense * 2;
		cout << "Barbarian rolls defense of " << defense << endl;
	}

int Barbarian::getDefense()
	{
		return defense;
	}

int Barbarian::get_strengthPoints()
	{
		return this->strengthPoints;
	}

void Barbarian::set_damage(int attack)
	{
		damage = attack - (this->getDefense() + this->armor); // If attack is less than barbarian defense + armor, no damage recieved
		if (damage < 0)
		{
			damage = 0;
			cout << "Barbarian receives no damage." << endl;
		}
		else
			cout << "Barbarian recieves " << damage << " damage" << endl;
	}

int Barbarian::get_damage()
	{
		return damage;
	}

int Barbarian::getArmor()
	{
		return this->armor;
	}
Barbarian::~Barbarian()
	{	}