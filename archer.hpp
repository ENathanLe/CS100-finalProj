#ifndef __ARCHER_HPP__
#define __ARCHER_HPP__

#include "player.hpp"
#include <string>

class Archer : public Player {
public:
	Archer(){
		attack = 7.5;
		defense = 5.0;
		speed = 7.5;
		magic = 5.0;
	}
	Archer(std::string name){
		fullname = name;
		attack = 7.5;
		defense 5.0;
		speed = 7.5;
		magic = 5.0;
	}
};

#endif
