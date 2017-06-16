#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        virtual ~SuperMutant();
        virtual void takeDamage(int);
        SuperMutant(SuperMutant const & src);
        SuperMutant & operator=(SuperMutant const & rhs);
};
#endif
