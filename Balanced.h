#pragma once

#include "IRole.h"

class Balanced : public IRole {
public:
    Balanced() : IRole(84, 83, 83, "Balanced") {}

    std::string GetRole() override {
        return "Balanced";
    }

    ~Balanced() override {}
};
