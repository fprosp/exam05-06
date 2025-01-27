#include "ASpell.hpp"
	
ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect)
{

}

ASpell &ASpell::operator=(ASpell const &rhs)
{
	this->_name = rhs._name;
	this->_effect = rhs._effect;
	return (*this);
}

ASpell::ASpell(ASpell const &obj)
{
	*this = obj;
}

ASpell::~ASpell()
{

}

std::string		ASpell::getName() const
{
	return(_name); 
}

std::string		ASpell::getEffect() const
{
	return (_effect);
}

void	ASpell::launch(ATarget const &atarget) const
{
	atarget.getHitBySpell(*this);	
}