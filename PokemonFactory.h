#pragma once
#include "Type.h"
#include "IRole.h"
#include <memory>

class Pokemon : public IRole, public IType {
public:
    Pokemon(int hp, int attack, int defense, const std::string& role, const std::string& type);
    ~Pokemon() override;

private:
    std::unique_ptr<std::string> m_role;
};

class PokemonFactory {
public:
    static std::unique_ptr<Pokemon> CreatePokemon(int hp, int attack, int defense, const std::string& role, const std::string& type);
};
