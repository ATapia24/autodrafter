//implementation for Contest.h
#include "Contest.h"

//CONSTRUCTOR
Contest::Contest()
{
    url = "null";
    id = "null";
   //type = SportType::EMPTY;
}

//DOWNLOAD
//Desc. download contest file
void Contest::download()
{
    std::cout << "Enter contest link: ";
    std::string url;
    std::cin >> url;
    dl_mgr::downloadUrl(url, url, CONTEST_DIR);
}
