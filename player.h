//PLAYER CLASS INTERFACE FILE
#ifndef PLAYER_h
#define PLAYER_H

#include <string>

class Player
{
private:
	std::string name;
	std::string team;
	std::string position;
	double salary;
	double fppg;
	double fppd;
public:
	Player();
	void calc_fppd();
	

	//get and set
	void setName(const std::string _name){name = _name;};		//NAME
	std::string getName(){return name;};
	void setTeam(const std::string _team){team = _team;};		//TEAM
	std::string getTeam(){return team;};
	void setPosition(const std::string _position){position = _position;}; //POSITION
	std::string getPosition(){return position;};
	void setSalary(const double _salary){salary = _salary;};	//SALARY
	double getSalary(){return salary;};
	void setFPPG(const double _fppg){fppg = _fppg;};		//FPPG
	double getFPPG(){return fppg;};
	void setFPPD(const double _fppd){fppd = _fppd;};		//FPPD
	double getFPPD(){return fppd;};
};

#endif
