//PLAYER CLASS IMPLEMENTATION
#include "player.h"

//CONSTRUCTOR
Player::Player()
{
	name = "null";
	team = "null";
	salary = 0.0;
	fppg = 0.0;
	fppd = 0.0;
}

//CALCUALTE FPPD
//Desc. calculate fppd
void Player::calc_fppd()
{
	fppd = fppg / salary;
}
