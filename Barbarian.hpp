#include "Character.hpp"
#include <string>
#include <iostream>
using namespace std;

#ifndef BARBARIAN_H
#define BARBARIAN_H

class Barbarian : public Character {
private:
	int armor = 0;
	int strengthPoints = 12;
	string name = "Barbarian ";
public:
	Barbarian();		//Constructor
	string getName();	//Get name
	void setAttack();	//Gets attack of barbarian
	int getAttack();	//Return integer value of attack
	void setDefense();	//Get's defense roll of Barbarian
	int getDefense();	//Return integer value of defense
	int get_strengthPoints();	//Returns stregnthpoints
	void set_damage(int attack);	//Set's the damage from intake attack
	int get_damage();	//Return integer value of damage recieved 
	int getArmor();		//Return armor integer
	~Barbarian();
};

#endif