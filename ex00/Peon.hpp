#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

public:

    virtual void getPolymorphed() const;
    Peon(std::string mName);
    Peon( Peon const & src);
    virtual ~Peon(void);
    Peon & operator=(Peon const & rhs);

private:
    Peon(void);
};

#endif
