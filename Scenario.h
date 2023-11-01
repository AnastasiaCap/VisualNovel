#pragma once
#include <vector>
#include "Scene.h"

class Scenario
{
    std::vector<Scene> scenario;

public:
    Scene start();
    Scene end();
    Scene Do(Event event);
};