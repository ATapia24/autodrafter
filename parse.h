#ifndef PARSE_H
#define PARSE_H

#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include "player.h"

namespace parse
{
	std::string extractBetween(std::string& string, const char token, const char replace);
	std::string yahooLocalID(const std::string url);
	std::string yahooGlobalID(const std::string filename);
	std::vector<Player> yahooNFL(const std::string url);
};

#endif
