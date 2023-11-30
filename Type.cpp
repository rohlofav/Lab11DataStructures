#include "Type.h"

IType::IType()
{
}

IType::IType(const std::string &type)
{
}

IType::~IType()
{
}

int IType::FireMod()
{
    return fireMod;
}

int IType::WaterMod()
{
    return waterMod;
}

int IType::GrassMod()
{
    return grassMod;
}

int IType::ElectricMod()
{
    return electricMod;
}

std::string IType::GetType()
{
    return m_type;
}
