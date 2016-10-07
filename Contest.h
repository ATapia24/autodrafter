#ifndef CONTEST_H
#define CONTEST_H

#include <iostream>
#include <string>
#include <vector>
#include "parse.h"
#include "download.h"
//include "player.h"

const std::string CONTEST_DIR = "contests";

enum Website
{
	YAHOO,
	DRAFTKINGS
};

enum SportType
{
    NBA,
    NFL,
    NHL,
    EMPTY
};

class Contest
{
    private:
        std::string url;
        std::string localID;
	std::string globalID; 
 	SportType sport;
	Website website;
	std::vector<Player> players;

    public:
        Contest();
	void load();
	void setUrl(const std::string _url);
};

#endif
