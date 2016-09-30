//prompt_mgr namespace implementation
#include "PromptMgr.h"


//START LOOP
void prompt_mgr::startPromptLoop()
{
    do
    {
        createNewContest();

    }while(repeatPrompt());
}

//CREATE NEW CONTEST
void prompt_mgr::createNewContest()
{
    Contest contest;
    contest.download();
}

//REPEAT PROMPT
bool prompt_mgr::repeatPrompt()
{
    std::cout << "Would you like to repeat? ";
    char r;
    std::cin >> r;
    if(r == 'y' || r == 'Y')
        return 1;
    return 0;
}
