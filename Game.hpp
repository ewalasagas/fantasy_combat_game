/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Game.hpp
*********************************************************************/
#include "Character.hpp"
#include "Vampire.hpp"
#include "HarryPotter.hpp"
#include "BlueMen.hpp"
#include "Barbarian.hpp"
#include "Medusa.hpp"
#include <iostream>
#include <string>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
#include <limits>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
protected:
	Character *choice1;		//Creating classes
	Character *choice2;
	Character *choice3;
	Character *choice4;
	Character *choice5;
	int choice;		//Begining choice of game (play or exit)
	int attacker;	//Choose your attacker
	int opponent;	//Choose your opponenet
	int health;		//Player health
public:
	Game();
	void menu();							//Main menu
	int returnAttacker();					//Get integer of attacker player chosen based off menu
	int returnOpponent();					//Get integer of opponent player chosen based off menu
	string getName(int player);				//Get name of player
	int playerAttacker(int player);			//Get player attack damage
	int playerOpponent(int player, int x);		//Get player damage depending on attack
	int playerHealth(int player);		//Get player health
	~Game();
};

#endif