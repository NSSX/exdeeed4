#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        virtual ~RadScorpion();
        RadScorpion(RadScorpion const & src);
        RadScorpion & operator=(RadScorpion const & rhs);
};
#endif
