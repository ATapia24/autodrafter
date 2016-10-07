//CONTEST MANAGER INTERFACE

#include <iostream>
#include <vector>
#include "contest.h"
#include "download.h"
#include "parse.h"

class ContestManager
{
private:
	std::vector<Contest> contests;
public:
	ContestManager();
	addContest();
};
