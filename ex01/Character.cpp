#include "Character.hpp"

Character::Character(void) : name("defaultName"), action_points(40), current_weapon(NULL){
    return;
}

Character::Character(std::string const & name) : name(name), action_points(40), current_weapon(NULL){
    return;
}

Character::~Character(){
    return;
}

void Character::recoverAP(){
    if(this->action_points < 40){
        this->action_points += 40;
        if(this->action_points > 40){
            this->action_points = 40;
        }
    }
    return;
}

void Character::equip(AWeapon* newWeapon){
    current_weapon = newWeapon;
    return;
}

void Character::attack(Enemy* enemy){
    if(current_weapon != NULL){
    if(this->action_points - current_weapon->getAPCost() >= 0 ){
        this->action_points -= current_weapon->getAPCost();
        std::cout<< this->name <<  " attacks " <<enemy->getType() << " with a " << current_weapon->getName() << std::endl;
        current_weapon->attack();
        enemy->setHitPoints(enemy->getHP() - current_weapon->getDamage());
        if(enemy->getHP() <= 0){
            enemy->~Enemy();
            //destroy ennemy
        }
    }
}
    return;
}

int Character::getAP() const{
    return this->action_points;
}
AWeapon *Character::getCurrentWeapon() const{
    return this->current_weapon;
}

std::string Character::getName() const{
    return this->name;
}

Character & Character::operator=(Character const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.getName();
    this->action_points = rhs.getAP();
    this->current_weapon = rhs.getCurrentWeapon();
    return *this;
}

Character::Character(Character const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs){
    if(rhs.getCurrentWeapon()!= NULL){
        o << rhs.getName()<< " has "<<rhs.getAP() <<" AP and wields a " << rhs.getCurrentWeapon()->getName() << std::endl;
    }
    else{
            o << rhs.getName()<< " has " <<rhs.getAP()<< " and is unarmed"<<std::endl;
    }
    return o;
}
