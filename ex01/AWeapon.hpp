#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    private:
        AWeapon(void);
        std::string name;
        int shoot_cost;
        int damage_hit;
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        std::string virtual getName() const;
        int getAPCost() const;
        int getDamage() const;
        void setName(std::string name);
        void setAPCost(int apcost);
        void setDamage(int dmg);
        virtual void attack() const = 0;
        AWeapon & operator=(AWeapon const & rhs);
};
#endif
