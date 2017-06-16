#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string name;
        int action_points;
        AWeapon *current_weapon;
    public:
        int getAP() const;
        AWeapon *getCurrentWeapon() const;
        Character(void);
        Character(std::string const & name);
        virtual ~Character();
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string virtual getName() const;
        Character & operator=(Character const & rhs);
        Character(Character const & src);
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);
#endif
