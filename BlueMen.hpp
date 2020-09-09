#include "Character.hpp"
#include <string>
#include <iostream>
using namespace std;

#ifndef BLUEMEN_H
#define BLUEMEN_H

class BlueMen : public Character {
private:
protected:
	int armor = 3;
	int strengthPoints = 12;
	int attackDice = 10;
	int defenseDice = 6;
	int attackDiceCount = 2;
	int defenceDiceCount = 3;
	string name = "Blue Men ";
public:
	BlueMen();
	string getName();	//Get name
	void setAttack();	//Get's attack of Blue Men
	int getAttack();	//Returns integer attack value from roll
	void setDefense();	//Get's defeinse roll of Blue Men
	int getDefense();	//Returns integer defense value 
	int get_strengthPoints();		//Returns int of strengthpoints
	void set_damage(int attack);	//Set's the damage from an intake attack
	int get_damage();	//Returns the damage recieved after trade effect
	int getArmor();
	~BlueMen();
};

#endif