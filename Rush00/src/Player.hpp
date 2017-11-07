#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <curses.h>
#include <ncurses.h>
#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>

class Player {

	protected:
		int x;
		int y;
		int	hp;
		int maxHp;
		char c;
		int HEIGHT;
		int WIDTH;
	public:
		Player(void);
		~Player(void);
		Player(int x, int y, int hp, char c, int WIDTH, int HEIGHT);
		Player(const Player &P);
		Player &operator = (const Player &p);
		void movePlayer(WINDOW *win, int code);
		int getX(void) const;
		int getY(void) const;
		int getHp(void) const;
		char getSymbol(void) const;
		void takeDamage(int amount);
		void takeHeal(int amonut);
		void setPlayer(int x, int y);
};
#endif