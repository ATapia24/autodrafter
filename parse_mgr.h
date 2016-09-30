#ifndef PARSE_MGR_H
#define PARSE_MGR_H

#include<iostream>
#include<fstream>
#include<string>

namespace parse_mgr
{
    std::string extractBeteen(std::string& string, const char token, const char replace);
};

#endif
