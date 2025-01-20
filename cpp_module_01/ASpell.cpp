#include "ASpell.hpp"

std::string     ASpell::getName()   const
{
    return (_name);
}

std::string     ASpell::getEffect()    const
{
    return (_effect);
}

ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect)
{
}

ASpell &ASpell::operator=(ASpell const &rho)        // Assigment operator overload
{
   _name = rho.getName();
   _effect = rho.getEffect();
   return (*this);
}

ASpell::ASpell(ASpell const & obj)
{
    *this = obj;
}

ASpell::~ASpell()
{
}
