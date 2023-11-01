#pragma once
#include <string>
#include "Event.h"

class Scene
{
    std::string imagePath;
    std::string musicPath;
    std::vector<Event> events;

public:
    void Draw();
    Event GetEvent();
};
