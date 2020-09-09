/*********************************************************************
** Program name: Project 3
** Author: Elaine Alasagas
** Date: 2/17/2019
** Description: CS162_400_WINTER2019 - Fantasy Combat Game - main
*********************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>		//for rand
#include <cmath>
#include <time.h>
#include <limits>
#include "Game.hpp"
int main()
{
	int player1 = 0;
	int player2 = 0;
	int damage;
	int player1_health = 0;
	int player2_health = 0;
	int rounds = 1;
	char yesorno;

	do {
		Game test;
		test.menu();
		player1 = test.returnAttacker();
		player2 = test.returnOpponent();

		std::cout << "Attacker: " << test.getName(player1) << endl;
		std::cout << "Defender: " << test.getName(player2) << endl;
		std::cout << endl;

		player1_health = test.playerHealth(player1);
		player2_health = test.playerHealth(player2);
		cout << "Starting " << test.getName(player1) << "health: " << player1_health << endl;
		cout << "Starting " << test.getName(player2) << "health: " << player2_health << endl;
		std::cout << "----------------------------------" << endl;

		while (true)
		{
			cout << "ROUND: " << rounds << endl;
			std::cout << "----------------------------------" << endl;
			player1 = test.returnAttacker();
			player2 = test.returnOpponent();

			damage = test.playerOpponent(player2, test.playerAttacker(player1));

			player2_health = player2_health - damage;
			cout << test.getName(player2) << " health: " << player2_health << endl;
			std::cout << "----------------------------------" << endl;
			if (player2_health <= 0)
			{
				std::cout << test.getName(player2) << " has been defeated. " << endl;
				break;
			}
			else
				//Swap attacker and defender
				damage = test.playerOpponent(player1, test.playerAttacker(player2));

			player1_health = player1_health - damage;
			std::cout << test.getName(player1) << " health: " << player1_health << endl;
			std::cout << "----------------------------------" << endl;
			if (player1_health <= 0)
			{
				std::cout << test.getName(player1) << " has been defeated. " << endl;
				break;
			}
			rounds++;
		}
		std::cout << "Restart game?" << endl;
		std::cin >> yesorno;
	} while (yesorno == 'Y' || yesorno == 'y');

	return 0;
}