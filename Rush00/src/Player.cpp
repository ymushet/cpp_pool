#include "Player.hpp"

Player::Player(void) {
	x = 0;
	y = 0;
	hp = 3;
	maxHp = 6;
	c = '^';
	HEIGHT = 0;
	WIDTH = 0;
}

Player::Player(int x, int y, int hp, char c, int HEIGHT, int WIDTH) {
	this->x = x;
	this->y = y;
	this->c = c;
	this->hp = hp;
	this->maxHp = 6;
	this->HEIGHT = HEIGHT;
	this->WIDTH = WIDTH;
}

Player::~Player(void) {

}

void Player::setPlayer(int x, int y) {
	this->x = x;
	this->y = y;
}

Player &Player::operator = (const Player &P) {
	this->x = P.x;
	this->y = P.y;
	this->hp = P.hp;
	this->c = P.c;
	this->maxHp = P.maxHp;
	return *this;
}

Player::Player(const Player &P) {
	*this = P;
}

void Player::movePlayer(WINDOW *win, int code) {
	
	mvwprintw(win, x, y, "%c", ' ');
	if (code == 'w')
    		this->x -= 1;
   	if (code == 's')
    		this->x += 1;
   	if (code == 'a')
    		this->y -= 1;
   	if (code == 'd')
   			this->y += 1;
	if (this->x > WIDTH) {
		this->x = WIDTH;
	}
	if (this->x < 0) {
		this->x = 0;
	}
	if (this->y > HEIGHT) {
		this->y = HEIGHT;
	}
	if (this->y < 0) {
		this->y = 0;
	}
	mvwprintw(win, x, y, "%c", '^');
	refresh();
}

int Player::getX(void) const {
	return x;
}

int Player::getY(void) const {
	return y;
}

int Player::getHp(void) const {
	return hp;
}

char Player::getSymbol(void) const {
	return c;
}

void Player::takeDamage(int amount) {
	hp -=amount;
	if (hp <= 0)
		exit(1);
}

void Player::takeHeal(int amount) {
	hp += amount;
	if (hp > maxHp)
		hp = maxHp;
}