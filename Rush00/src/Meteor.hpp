//
// Created by Yehor Mushet on 11/5/17.
//

#ifndef RUSH00_METEOR_HPP
#define RUSH00_METEOR_HPP

#include "Enemy.hpp"

class Meteor_Enemy : public Enemy {
	protected:
		char m;
	public:
		Meteor_Enemy();
	void tobi_pizda();
};

#endif //RUSH00_METEOR_HPP
