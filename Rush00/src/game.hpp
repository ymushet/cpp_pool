#ifndef GAME_HPP
# define GAME_HPP

#include "Player.hpp"
#include "Enemy.hpp"
#include "Meteor.hpp"
#include "Ship.hpp"
#include "Dragon.hpp"

class Game {
	private:
	int WIDTH;
	int HEIGHT;
	WINDOW *win;
	Player *Ship;
	Dragon_Enemy **Dragons;
	Ship_Enemy  **Ships;
	Meteor_Enemy **Meteors;
	public:
		Game();
		~Game();
		void RunGame();
		void PrintMap();
		//static endGame();
};

#endif