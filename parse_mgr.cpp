//parse_mgr namespace implentation

#include "parse_mgr.h"

std::string parse_mgr::extractBeteen(std::string& string, const char token, const char replace)
{
    int start, end;
    bool found = 0;

    for(int i=0; i < string.size(); i++)
    {
        if(found)
        {
            end = i;
            return string.substr(start + 1, end - start - 1);
        }else
        {
            start = i;
            found = 1;
            string[1] = replace;
        }

    }

    if(found)
        return string.substr(start + 1, string.size() - start - 1);

    return "";
}
