#include "Warlock.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"

Warlock::Warlock()
{
}

Warlock &Warlock::operator=(Warlock const &rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Warlock::Warlock(Warlock const &obj)
{
	*this = obj;
}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string		const &Warlock::getName() const
{
	return _name;
}

std::string		const &Warlock::getTitle() const
{
	return _title;
}

void	Warlock::setTitle(std::string const &str)
{
	_title = str;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am" << _name << ", " << _title << "!" <<  std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		if (_SpellBook.find(spell->getName()) != _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string spellname)
{
	if (_SpellBook.find(spellname) != _SpellBook.end())
	{
		delete _SpellBook[spellname];
		_SpellBook.erase(_SpellBook.find());
	}
}

void	Warlock::launchSpell(std::string spellname, ATarget const &target)
{
	if (_SpellBook.find(spellname) != _SpellBook.end())
		_SpellBook[spellname]->launch(target);
}