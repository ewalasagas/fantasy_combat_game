/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Medusa.hpp
*********************************************************************/
#include "Character.hpp"
#include <string>
#include <iostream>
#include <cstdlib>		//for rand
#include <cmath>
#include <limits>
using namespace std;

#ifndef MEDUSA_H
#define MEDUSA_H

class Medusa : public Character {
private:
protected:
	int armor = 3;
	int strengthPoints = 8;
	string name = "Medusa";
public:
	Medusa();			//Constructor
	string getName();	//Get name
	void setAttack();	//Gets attack of Medusa
	int getAttack();	//Returns integer value of attack
	void setDefense();	//Get's defense roll of Medusa
	int getDefense();	//Reutns integer value of defense 
	int get_strengthPoints(); //Get's strengthpoints
	void set_damage(int attack);	//Set's the damage from an intake attack
	int get_damage();		//Returns the damage recieved after defense roll and armor
	int getArmor();	//Return armor integer
	~Medusa();
};

#endif