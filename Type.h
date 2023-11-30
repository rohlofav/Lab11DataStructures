#pragma once
#include <string>

class IType {
public:
    IType();
    IType(const std::string& type);
    virtual ~IType();

    virtual int FireMod();
    virtual int WaterMod();
    virtual int GrassMod();
    virtual int ElectricMod();
    virtual std::string GetType();

protected:
    int fireMod;
    int waterMod;
    int grassMod;
    int electricMod;
    std::string m_type;
};
