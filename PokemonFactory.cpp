#include "PokemonFactory.h"

Pokemon::Pokemon(int hp, int attack, int defense, const std::string &role, const std::string &type)
{

}

Pokemon::~Pokemon()
{
}

std::unique_ptr<Pokemon> PokemonFactory::CreatePokemon(int hp, int attack, int defense, const std::string &role, const std::string &type)
{
    return std::unique_ptr<Pokemon>();
}
