#ifndef RUSH_ENEMY_HPP
#define RUSH_ENEMY_HPP

#include "game.hpp"

class Enemy {
protected:
	int 	curHP;
	int 	maxHP;
	int 	x;
	int 	y;

public:
	Enemy(void);
	~Enemy(void);
	Enemy(int x, int y);
	void	setParam(int curHP, int x, int y);
	void	set_X_right();
	void	set_X(int weight);
	void	set_Y(int i);
	int		getHP();
	int 	getX();
	int 	getY();
	void	update();

};

#endif //RUSH_ENEMY_HPP