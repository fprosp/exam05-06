#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock 
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &obj);
		Warlock &operator=(Warlock const &rhs);
		std::map < std::string, ASpell * > _SpellBook;

	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &str);
		void	introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, ATarget const &atarget);
};