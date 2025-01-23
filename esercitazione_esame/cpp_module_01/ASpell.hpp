#include "iostream"

class ASpell
{
    protected:
        std::string _name;
        std::string _effect;
    
    public:

        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;

        ASpell(std::string name, std::string effect);
        ASpell(ASpell const &obj);
        ASpell &operator=(ASpell const &rhs);
        virtual ~ASpell();


    
};