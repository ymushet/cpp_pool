#include "Enemy.hpp"

Enemy::Enemy() {x = 50; y = 0; curHP = 3; maxHP = 3;}
Enemy::Enemy(int x, int y) {this->x = x; this->y = y;}
Enemy::~Enemy() {delete Enemy; std::cout<<"Enemy is killed"<<std::endl;}
void Enemy::update() { y = y + 1;}
void Enemy::setParam(int curHP, int x, int y)
{
	this->curHP = curHP;
	this->x = x;
	this->y = y;
}
int		Enemy::getHP() { return this->curHP; }
int		Enemy::getX() { return this->x; }
int		Enemy::getY() { return this->y; }
void	Enemy::set_X(int weight)
{
	srand(time(NULL));
	
	this->x =  0 + rand()% weight;
}
void	Enemy::set_Y(int i) {this->y =  -10  + i;}
//SpaceObject::update() { pos.y += 1; }