#pragma once
#include <iostream>

class ASpell;

class ATarget	 
{
	protected:
		std::string		_type;

	public:	
		std::string			getType() const;
		virtual ATarget		*clone() const = 0;
		void				getHitBySpell(ASpell const &spell) const;

		ATarget(std::string type);
		ATarget &operator=(ATarget const &rhs);
		ATarget(ATarget const &obj);
		virtual ~ATarget();

};