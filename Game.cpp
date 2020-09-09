/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Game.cpp
*********************************************************************/
#include "Game.hpp"
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

Game::Game()
{	
	choice1 = new Vampire();		//Creating classes
	choice2 = new Barbarian();
	choice3 = new BlueMen();
	choice4 = new Medusa();
	choice5 = new HarryPotter();
}

void Game::menu()
	{
		srand(time(NULL));
		std::cout << "Fantasy Combat Game\n" << endl;
		std::cout << "Welcome to the Fantasy Combat Game! In this game, you will choose " << endl;
		std::cout << "from a list of fantasy characters.  Each character has a specific " << endl;
		std::cout << "attack, defense, armor, and special ability (each are based off of " << endl;
		std::cout << "programmed dice roles.)  Then you will choose an a oppoenent to go " << endl;
		std::cout << "up against. After an exchange of attacks, whoever is alive is the " << endl;
		std::cout << "winner! Have fun!\n" << endl;

		std::cout << "Choose from the following options: " << std::endl;
		std::cout << "(1) Play game " << std::endl;
		std::cout << "(2) Exit game " << std::endl;
		while (true)
		{
			std::cout << "Choice: ";
			if (std::cin >> choice && (choice == 1 || choice == 2))
			{
				break;
			}
			else
			{
				std::cout << "Please enter a valid choice" << std::endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		if (choice == 1)
		{
			std::cout << "Choose your attacker!" << endl;
			std::cout << "(1) Vampire " << endl;
			std::cout << "(2) Barbarian " << endl;
			std::cout << "(3) Blue Men " << endl;
			std::cout << "(4) Medusa " << endl;
			std::cout << "(5) Harry Potter " << endl;
			while (true)
			{
				std::cout << "Choice: ";
				if (std::cin >> attacker && (attacker > 0 || attacker < 6))
				{
					break;
				}
				else
				{
					std::cout << "Please enter a valid choice" << std::endl;
					std::cin.clear();
					std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			std::cout << "Choose your opponent!" << endl;
			std::cout << "(1) Vampire " << endl;
			std::cout << "(2) Barbarian " << endl;
			std::cout << "(3) Blue Men " << endl;
			std::cout << "(4) Medusa " << endl;
			std::cout << "(5) Harry Potter " << endl;
			while (true)
			{
				std::cout << "Choice: ";
				if (std::cin >> opponent && (opponent > 0 && opponent < 6))
				{
					break;
				}
				else
				{
					std::cout << "Please enter a valid choice" << std::endl;
					std::cin.clear();
					std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		}

		else if (choice == 2)
		{
			std::cout << "End program\n";
			terminate();
		}
	}

int Game::returnAttacker()
	{
		return attacker;
	}

int Game::returnOpponent()
	{
		return opponent;
	}

string Game::getName(int player)
	{
		string name;
		if (player == 1)
		{
			name = choice1->getName();
		}
		if (player == 2)
		{
			name = choice2->getName();
		}
		if (player == 3)
		{
			name = choice3->getName();
		}
		if (player == 4)
		{
			name = choice4->getName();
		}
		if (player == 5)
		{
			name = choice5->getName();
		}
		return name;
	}

int Game::playerAttacker(int player)
	{
		int attackdamage;
		if (player == 1)
		{
			choice1->setAttack();
			attackdamage = choice1->getAttack();
		}
		if (player == 2)
		{
			choice2->setAttack();
			attackdamage = choice2->getAttack();
		}
		if (player == 3)
		{
			choice3->setAttack();
			attackdamage = choice3->getAttack();
		}
		if (player == 4)
		{
			choice4->setAttack();
			attackdamage = choice4->getAttack();
		}
		if (player == 5)
		{
			choice5->setAttack();
			attackdamage = choice5->getAttack();
		}
		std::cout << endl;
		return attackdamage;
	}

int Game::playerOpponent(int player, int x)
	{
		int damage;
		if (player == 1)
		{
			choice1->setDefense();
			cout << "Armor: " << choice1->getArmor() << endl;
			choice1->set_damage(x);
			damage = choice1->get_damage();
		}
		if (player == 2)
		{
			choice2->setDefense();
			cout << "Armor: " << choice2->getArmor() << endl;
			choice2->set_damage(x);
			damage = choice2->get_damage();
		}
		if (player == 3)
		{
			choice3->setDefense();
			cout << "Armor: " << choice3->getArmor() << endl;
			choice3->set_damage(x);
			damage = choice3->get_damage();
		}
		if (player == 4)
		{
			choice4->setDefense();
			cout << "Armor: " << choice4->getArmor() << endl;
			choice4->set_damage(x);
			damage = choice4->get_damage();
		}
		if (player == 5)
		{
			choice5->setDefense();
			cout << "Armor: " << choice5->getArmor() << endl;
			choice5->set_damage(x);
			damage = choice5->get_damage();
		}
		return damage;
	}

int Game::playerHealth(int player)
	{
		if (player == 1)
		{
			health = choice1->get_strengthPoints();
		}
		if (player == 2)
		{
			health = choice2->get_strengthPoints();
		}
		if (player == 3)
		{
			health = choice3->get_strengthPoints();
		}
		if (player == 4)
		{
			health = choice4->get_strengthPoints();
		}
		if (player == 5)
		{
			health = choice5->get_strengthPoints();
		}
		return health;
	}
Game::~Game()
{	
	delete choice1;
	delete choice2;
	delete choice3;
	delete choice4;
	delete choice5;

	delete new Vampire();		//Creating classes
	delete new Barbarian();
	delete new BlueMen();
	delete new Medusa();
	delete new HarryPotter();
}