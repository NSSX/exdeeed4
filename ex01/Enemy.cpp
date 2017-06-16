#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : hit_points(hp), type(type){
//    std::cout << "Create Enemy type: " << this->type << std::endl;
    return;
}
Enemy::~Enemy(){
//    std::cout << "Destroy Enemy type: " << this->type << std::endl;
    return;
}
std::string  Enemy::getType() const{
    return this->type;
}

int Enemy::getHP() const{
    return this->hit_points;
}

void Enemy::takeDamage(int dmg){
    if(dmg > 0){
        this->hit_points -= dmg;
        if(this->hit_points < 0){
            this->hit_points = 0;
        }
    }
}

void Enemy::setType(std::string type){
    this->type = type;
}

void Enemy::setHitPoints(int hp){
    this->hit_points = hp;
}

Enemy::Enemy(Enemy const & src){
//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Enemy & Enemy::operator=(Enemy const & rhs){
//    std::cout << "Assignation operator called" << std::endl;
    setType(rhs.getType());
    setHitPoints(rhs.getHP());
    return *this;
}
