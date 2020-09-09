/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - HarryPotter.cpp
*********************************************************************/
#include "Character.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
using namespace std;

HarryPotter::HarryPotter()
{	}

string HarryPotter::getName()
	{
		return this->name;
	}


void HarryPotter::setAttack()
	{
		attack = rand() % 6 + 1;	//2-d6 attack
		attack = attack * 2;
		cout << "Harry Potter rolls attack of " << attack << endl;
	}

int HarryPotter::getAttack()
	{
		return attack;
	}


void HarryPotter::setDefense()
	{
		defense = rand() % 6 + 1;	//2-d6 defense
		cout << "Harry Potter rolls defense of " << defense << endl;
	}

int HarryPotter::getDefense()
	{
		return defense;
	}


int HarryPotter::get_strengthPoints()
	{
		return this->strengthPoints;
	}


void HarryPotter::set_damage(int attack)
	{
	int count = NULL;
		damage = attack - (this->getDefense() + this->armor);		//If attack is less than HP defense + armor, no damage recieved		
		strengthPoints = strengthPoints - damage;
		cout << "count " << count << endl;
		cout << "Stength points: " << strengthPoints << endl;
		if (damage < 0)
		{
			damage = 0;
			cout << "Harry receives no damage." << endl;
		}
		
		if (damage >= strengthPoints)		//Returns the damage recieved after health
		{
			count++;
			if (count == 1)
			{
				cout << "Harry recieves " << damage << " damage " << endl;
				damage = 0;
				cout << "Harry strength points: " << this->strengthPoints << endl;
				cout << "Harry dies but comes back to life!" << endl;
				this->strengthPoints = 0;
				damage = -20;
				count++;
			}
			if (count != 1)
			{
				//Let harry die
				cout << "Harry recieves " << damage << " damage " << endl;
				count--;
			}
		}
	}

int HarryPotter::get_damage()
	{
		return damage;
	}

int HarryPotter::getArmor()		
	{
		return this->armor;
	}

HarryPotter::~HarryPotter()
{	}