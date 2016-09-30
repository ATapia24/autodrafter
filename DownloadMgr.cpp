//dl_mgr namespace implentation
#include "DownloadMgr.h"

//DOWNLOAD URL
bool dl_mgr::downloadUrl(const std::string url, const std::string filename)
{
    std::string command = "wget " + url + " -O " + filename + " - q";
    std::cout << "Downloading: " << url << " -> ";
    if(system(command.c_str()))
    {   
        std::cout << "Download Failed\n";
        return 0;
    }
    else
        std::cout << "Download Complete\n";
    return 1;
}


//DOWNLOAD URL W/ PATH
bool dl_mgr::downloadUrl(const std::string url, const std::string filename, const std::string path)
{
    std::string command = "wget " + url + " -O " + path + '/' +filename + " -q";
    std::cout << "Downloading: " << url << " -> ";
    if(system(command.c_str()))
    {
        std::cout << "Download Failed\n";
        return 0;
    }else
        std::cout << "Download Completed\n";
    return 1;
}
