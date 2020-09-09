/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Medusa.cpp
*********************************************************************/
#include "Character.hpp"
#include "Medusa.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
#include <limits>
using namespace std;

Medusa::Medusa()
{	}

string Medusa::getName()
	{
		return this->name;
	}


void Medusa::setAttack()
	{
		attack = rand() % 6 + 1;	//2-d6 attack
		attack = attack * 2;
		if (attack >= 12)
		{
			cout << "Medusa uses Glare! " << endl;
			attack = 99;
		}
		else
			cout << "Medusa rolls attack of " << attack << endl;
	}

int Medusa::getAttack()
	{
		return attack;
	}


void Medusa::setDefense()
	{
		defense = rand() % 6 + 1;	//1-d6 defense
		cout << "Medusa rolls defense of " << defense << endl;
	}
	
int Medusa::getDefense()
	{
		return defense;
	}


int Medusa::get_strengthPoints()
	{
		return this->strengthPoints;
	}


void Medusa::set_damage(int attack)
	{
		damage = attack - (this->getDefense() + this->armor);		//If attack is less than the Medusa's defense roll + armor, no damage recieved
		if (damage < 0)
		{
			damage = 0;
			cout << "Medusa receives no damage." << endl;
		}
		else
			cout << "Medusa recieves " << damage << " damage " << endl;
	}


int Medusa::get_damage()
	{
		return damage;
	}

int Medusa::getArmor()
	{
		return this->armor;
	}

Medusa::~Medusa()
{	}