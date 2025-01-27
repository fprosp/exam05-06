#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	Fwoosh();
	~Fwoosh();
	ASpell *clone() const;
};