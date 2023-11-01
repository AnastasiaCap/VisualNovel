#pragma once
#include <string>

class Scene;

class Event {
    std::string eventName;
    Scene* scene;
};