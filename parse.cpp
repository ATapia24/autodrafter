//parse namespace implentation

#include "parse.h"


//EXTRACT BETWEEN
//Desc. return string between tokens
std::string parse::extractBetween(std::string& string, const char token, const char replace)
{
    int start, end;
    bool found = 0;

    for(int i=0; i < string.size(); i++)
    {
	if(string[i] == token)
        	if(found)
		{
			end = i;
			return string.substr(start + 1, end - start - 1);
		}else
		{
			start = i;
			found = 1;
			string[i] = replace;
        	}

    }

    if(found)
        return string.substr(start + 1, string.size() - start - 1);

    return "";
}

//YAHOO LOCAL ID
//Desc. return local contest id
std::string parse::yahooLocalID(const std::string url)
{
	for(int i=0; i<url.size()-1; i++)
		if(url[i] == 't' && url[i+1] == '/')
			return url.substr(i+2, 7);

	std::cout << "Failed to find local ID.\n";
	return "";
}

//YAHOO ID
//Desc. return contest global id
std::string parse::yahooGlobalID(const std::string filename)
{
	std::string id, fileDir = "contests/" + filename;
	std::fstream f(fileDir.c_str());

	for(std::string line; getline(f, line);)
	{
		std::cout << line << '\n';
	}
	


	return id;
}

//YAHOO NFL
//Desc. return vector of nfl players loaded from contest file
std::vector<Player> parse::yahooNFL(const std::string filename)
{
	std::vector<Player> players;
	std::string fileDir = "players/" + filename;
	std::fstream f(fileDir.c_str());
	char t = ',', r = '#';

	//parse lines
	for(std::string line; getline(f, line);)
	{
		Player p;
		std::string first = extractBetween(line, t, r); //name
		std::string last = extractBetween(line, t, r);
		p.setName(first + ' ' + last);
		p.setPosition(extractBetween(line, t, r));
		p.setTeam(extractBetween(line, t, r)); //team
		extractBetween(line, t, r); //opponent
		extractBetween(line, t, r); //game
		extractBetween(line, t, r); //time
		p.setSalary(strtod(extractBetween(line, t, r).c_str(), NULL)); // salary
		p.setFPPG(strtod(extractBetween(line, t, r).c_str(), NULL)); // fppg

		//only add healthy/non-susp. players
		if(line[line.size() - 1] == '"')
			players.push_back(p);
	}

	return players;
}	































