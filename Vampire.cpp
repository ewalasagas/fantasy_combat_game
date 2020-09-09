/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Vampire.cpp
*********************************************************************/
#include "Character.hpp"
#include "Vampire.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
#include <limits>
using namespace std;

Vampire::Vampire() 
{	}

string Vampire::getName()
	{
		return this->name;
	}

void Vampire::setAttack()
	{
		attack = rand() % 12 + 1;	//1-d12 attack
		cout << "Vampire rolls attack of " << attack << endl;
	}

int Vampire::getAttack()
	{
		return attack;
	}

void Vampire::setDefense()
	{
		//Charm
		if (rand() % 2)
		{
			defense = 99;
			cout << "Vampire uses charm! Opponent does not attack" << endl;
		}
		else
		{
			defense = rand() % 6 + 1;	//1-d6 attack
			cout << "Vampire rolls defense of " << defense << endl;
		}
	}

int Vampire::getDefense()
	{
		return defense;
	}


int Vampire::get_strengthPoints()									//Returns int of strengthpoints
	{
		return this->strengthPoints;
	}

	
void Vampire::set_damage(int attack)								//Set's the damage from an intake attack
	{
		damage = attack - (this->getDefense() + this->armor);		//If attack is less than vampire defense + armor, no damage recieved
		if (damage < 0)
		{
			damage = 0;
			cout << "Vampire receives no damage." << endl;
		}
		else
			cout << "Vampire recieves " << damage << " damage" << endl;
	}

int Vampire::get_damage()
	{
		return damage;
	}

int Vampire::getArmor()
	{
		return this->armor;
	}

Vampire::~Vampire() 
{	}
