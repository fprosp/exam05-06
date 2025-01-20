#include "Warlock.hpp"

std::string     const &Warlock::getName() const
{
    std::cout << _name << std::endl;
}

std::string     const &Warlock::getTitle() const
{
    std::cout << _title << std::endl;
}

void      Warlock::setTitle(std::string const &str)
{
    _title = str;
}

void    Warlock::introduce() const
{
    std::cout << getName() << ": I am" << getName() << "," << getTitle() << "!" << std::endl;
}



// Coplien form

Warlock::Warlock()                                                                      
{
}

Warlock::Warlock(std::string name, std::string title): _name(name); _title(title)
{
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const &obj)
{
    *this = obj;
}

(Warlock const &rho)