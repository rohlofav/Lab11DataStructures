#pragma once
#include <string>

class IRole {
public:
    IRole();
    IRole(int hp, int attack, int defense, const std::string& role);
    virtual ~IRole();

    virtual int GetHP();
    virtual int GetAttack();
    virtual int GetDefense();
    virtual std::string GetRole();

protected:
    int m_attack;
    int m_defense;
    int m_hp;
    std::string m_role;
};
