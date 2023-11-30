#include "IRole.h"

class HighDefense : public IRole {
public:
    HighDefense() : IRole(100, 50, 100, "HighDefense") {}

    std::string GetRole() override {
        return "HighDefense";
    }

    ~HighDefense() override {}
};
