//DownloadManager.h 
//Desc. Download files

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>

namespace dl_mgr
{
    bool downloadUrl(const std::string url, const std::string filename); 
    bool downloadUrl(const std::string url, const std::string filename, const std::string path);
}

