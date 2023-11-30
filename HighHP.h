#include "IRole.h"

class HighHP : public IRole {
public:
    HighHP() : IRole(150, 50, 50, "HighHP") {}

    std::string GetRole() override {
        return "HighHP";
    }

    ~HighHP() override {}
};
