#include <iostream>
#include <vector>
#include "Player.h"
#include "Deck.h"
using std::cout;
using std::cin;
using std::vector;

#ifndef GAME_H
#define GAME_H

class Game
{
public:
	void setup();
	void play();
	void firstTurn();

	void reinforcementsPhase(Player currentPlayer);
	void attackPhase();
	void fortifyPhase();
	void endTurn();//draw a card if a territory is conquered
private:
	vector <Player> players;
	Deck deck;
	//Board board;
};

#endif