#include "IRole.h"

class HighAttack : public IRole {
public:
    HighAttack() : IRole(100, 100, 50, "HighAttack") {}

    std::string GetRole() override {
        return "HighAttack";
    }

    ~HighAttack() override {}
};
