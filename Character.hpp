/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Character.hpp
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
protected:
	int attack;
	int defense;
	int armor;
	int strengthPoints;
	int health;
	int damage;
	string name;
public:
	Character();					//Constructor
	virtual string getName();		//Get name
	int getAttack();				//Get Attack
	virtual void setAttack() = 0;		
	int getDefense();					//Get Defense
	virtual void setDefense() = 0;
	virtual int getArmor();				//Get Armor
	virtual int get_strengthPoints();	//Get SP 
	virtual void set_damage(int) = 0;	//Get Damage
	int get_damage();
	~Character();
};

#endif