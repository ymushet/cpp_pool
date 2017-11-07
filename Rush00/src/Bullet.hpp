#ifndef BULLET_HPP
#define BULLET_HPP
#include "Player.hpp"

class Bullet : public Player
{
	public:
		Bullet(void)  							: Player(void);
		~Bullet(void) 							: ~Bullet(void);
		Bullet(int x, int y) : Player(int x, int y, int hp, char c);
		Bullet (const Bullet &B)				: Player(const Player &P);
		Bullet &operator = (const Bullet &B) 	: Player &operator = (const Player &P);
		void moveBullet(int x, int y) 			: void movePlayer(int x, int y);
}
#endif