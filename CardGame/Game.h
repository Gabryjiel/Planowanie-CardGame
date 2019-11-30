#pragma once
#include "Player.h"
#include "Interface.h"
#include "AI.h"

class Game : protected Deck{
private:
	int round; 
	int roundWinner;
	const int numberOfPlayers;

	Player* player;
	Card* triumph;
	Interface* console;
	AI* ai;
	

	//Sets up the round
	//Sets up "mainDeck", players "hand" and "triumph"
	void startRound();

	//Sums up the round
	//Clears players "deck", "collected" and "table", decrements "round",
	void endRound();
	
	//Round through
	void singleRound();

	void sumUpRound();	//Who won? Who's next?

public:
	Game(int nOP = 4) :numberOfPlayers(nOP) {
		player = new Player[numberOfPlayers];
		triumph = nullptr;
		ai = new AI;
		if (52 % nOP == 0)
			round = 52 / nOP - 1;
		else round = 52 / nOP;

		player[0].setAI(false);
		roundWinner = 0;
		console = new Interface(player, &deck, triumph, nOP);
	};
	~Game();
	
	void start();

};
