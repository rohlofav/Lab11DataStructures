#include "IRole.h"

IRole::IRole()
{
}

IRole::IRole(int hp, int attack, int defense, const std::string &role)
{
}

IRole::~IRole()
{
}

int IRole::GetHP()
{
    return m_hp;
}

int IRole::GetAttack()
{
    return m_attack;
}

int IRole::GetDefense()
{
    return m_defense;
}

std::string IRole::GetRole()
{
    return m_role;
}
