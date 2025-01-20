#include <iostream>

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(Warlock const &obj);                     // Copy constructor
        Warlock &operator=(Warlock const &rho);          // Copy assigment oeprator overload 
        Warlock();                                       // Default constructor

    public:
        std::string const &getName() const;
        std::string const &getTitle() const;
        Warlock (std::string name, std::string title);   // Custom costructor
        ~Warlock();                                      // Destructor
        void    setTitle(std::string const &str);
        void    introduce () const;
};