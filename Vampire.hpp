/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Vampire.hpp
*********************************************************************/
#include "Character.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <limits>
using namespace std;

#ifndef VAMPIRE_H
#define VAMPIRE_H

class Vampire : public Character {
private:
protected:
	int armor = 1;
	int strengthPoints = 18;
	string name = "Vampire";
public:
	Vampire();				//Constructor
	string getName();		//Get name
	void setAttack();		//Gets attack of vapire
	int getAttack();		//Return integer roll
	void setDefense();		//Gets defeinse vampire roll
	int getDefense();		//Return integer roll
	int get_strengthPoints();		//Returns int of strengthpoints
	void set_damage(int attack);	//Set's the damage from an intake attack
	int get_damage();				//Return the damage recieved - this is to effect vampire health
	int getArmor();			//Return armor integer
	~Vampire();				//Deconstructor
};

#endif