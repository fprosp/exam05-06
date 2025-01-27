#include <iostream>
#include "ATarget.hpp"
#pragma once

class ATarget;

class ASpell
{
	protected:
		std::string		_name;
		std::string		_effect;

	public:
		std::string		getName() const;
		std::string		getEffect() const;
		virtual	ASpell *clone() const = 0;
		void			launch(ATarget const &atarget) const;


		ASpell(std::string name, std::string effect);
		ASpell &operator=(ASpell const &rhs);
		ASpell(ASpell const &obj);
		virtual ~ASpell();
};