//download.h 
//Desc. download namespace

#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>

namespace dl
{
    bool downloadUrl(const std::string url, const std::string filename); 
    bool downloadUrl(const std::string url, const std::string filename, const std::string path);
}

#endif

