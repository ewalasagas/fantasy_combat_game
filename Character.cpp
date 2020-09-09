/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Character.cpp
*********************************************************************/
#include "Character.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
#include <limits>
using namespace std;

Character::Character()
{	}

string Character::getName()
	{
		return this->name;
	}

int Character::getAttack()
	{
		return attack;
	}

int Character::getDefense()
	{
		return defense;
	}

int Character::getArmor()
	{ 
		return armor; 
	}


int Character::get_strengthPoints() 
	{ 
		return strengthPoints; 
	}

int Character::get_damage()
	{
		return damage;
	}

Character::~Character()
{	}
