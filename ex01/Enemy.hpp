#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
    private:
        Enemy(void);
        int hit_points;
        std::string type;
    public:
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();
        std::string virtual getType() const;
        int getHP() const;
        virtual void takeDamage(int);
        void setType(std::string type);
        void setHitPoints(int hp);
        Enemy(Enemy const & src);
        Enemy & operator=(Enemy const & rhs);
};
#endif
