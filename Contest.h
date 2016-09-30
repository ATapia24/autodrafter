#ifndef CONTEST_H
#define CONTEST_H

#include <iostream>
#include <string>
#include "DownloadMgr.h"

const std::string CONTEST_DIR = "contests";

enum SportType
{
    NBA,
    NFL,
    NHL,
    EMPTY
};

class Contest
{
    private:
        std::string url;
        std::string id;
        SportType type;

    public:
        Contest();
        void download();
};

#endif
