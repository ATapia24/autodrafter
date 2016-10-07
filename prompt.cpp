//PROMPT NAMESPACE IMPLEMENTATION
#include "prompt.h"


//START LOOP
void prompt::startPromptLoop()
{
	ContestManager contestMgr;
	do
	{
	
		contestMgr.addContest();
	
	}while(repeatPrompt());
}

//REPEAT PROMPT
bool prompt::repeatPrompt()
{
    std::cout << "Would you like to repeat? ";
    char r;
    std::cin >> r;
    if(r == 'y' || r == 'Y')
        return 1;
    return 0;
}
