#include "iostream"

class ASpell
{
    protected:
        std::string _name;
        std::string _effect;

    public:
        ASpell(std::string name, std::string effect);
        ASpell(ASpell const & obj);
        ASpell &operator=(ASpell const &rho);
        virtual~ASpell();


        std::string     getName() const;
        std::string     getEffect() const;
        virtual ASpell *clone() const = 0;



        
};