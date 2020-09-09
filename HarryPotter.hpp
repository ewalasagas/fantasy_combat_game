/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - HarryPotter.hpp
*********************************************************************/
#include "Character.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <limits>
using namespace std;

#ifndef HARRYPOTTER_H
#define HARRYPOTTER_H

class HarryPotter : public Character {
private:
protected:
	int armor = 0;
	int strengthPoints = 10;
	string name = "Harry Potter ";
public:
	HarryPotter();
	string getName();		//Get name
	void setAttack();		//Get's attack of Harry potter
	int getAttack();		//Returns integer value of attack
	void setDefense();		//Get's defense HP roll 
	int getDefense();		//Returns integer value of defense
	int get_strengthPoints();		//Returns int of strengthpoints
	void set_damage(int attack);		//Set's the damage from an intake attack
	int get_damage();		//Returns the damage recieved after health
	int getArmor();			//Return armor integer
	~HarryPotter();			//Deconstructor
};

#endif