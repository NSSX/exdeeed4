#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:

    std::string name;
    std::string title;


    void polymorph(Victim const & vic);
    std::string getName() const;
    std::string getTitle() const;
    Sorcerer(std::string mName, std::string mTitle);
    Sorcerer( Sorcerer const & src);
    virtual ~Sorcerer(void);
    Sorcerer & operator=(Sorcerer const & rhs);

private:
    Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);
#endif
