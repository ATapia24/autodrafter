//implementation for Contest.h
#include "contest.h"

//CONSTRUCTOR
Contest::Contest()
{
	url = "null";
	localID = "null";
	globalID = "null";
	website = YAHOO;
	sport = NFL;
}

//LOAD
//Desc. get contest id, download players file, and then load players
void Contest::load()
{
	std::cout << "Enter contest link or C to cancel: ";
	std::string url;
//tmp	std::cin >> url;
url = "https://sports.yahoo.com/dailyfantasy/contest/1430911/setlineup";
	if(url[0] != 'c' && url[0] != 'C')
	{
		std::cout << "Unable to download url please try again!\n";
	}

	if(website == YAHOO)
	{
		//get local id
		localID = parse::yahooLocalID(url);
		//download
	//tmp	dl::downloadUrl(url, localID, "contests");
		//download players
	//tmp	dl::downloadUrl("https://dfyql-ro.sports.yahoo.com/v2/export/contestPlayers?contestId=" + localID, localID, "players");
		if(sport = NFL)
			players = parse::yahooNFL(localID);
	}

	//tmp
	std::cout << "id: " << localID << '\n';
	std::cout << "pc: " << players.size() << '\n';

	for(int i=0; i<players.size(); i++)
		std::cout << players[i].getName() << ' ' << players[i].getTeam() << ' ' << players[i].getFPPG() << ' ' << players[i].getSalary() << '\n';
}


//SET URL
//Desc. set contest url
void Contest::setUrl(const std::string _url)
{
	url = _url;
}
