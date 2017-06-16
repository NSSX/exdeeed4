#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), shoot_cost(apcost), damage_hit(damage){
    //std::cout << "Create Weapon : " << this->name << std::endl;
    return;
}

AWeapon::AWeapon(AWeapon const & src){
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

 AWeapon::~AWeapon(){
    //std::cout << "Destroy Weapon : " << this->name << std::endl;
    return;
}
std::string AWeapon::getName() const{
    return this->name;
}
int AWeapon::getAPCost() const{
    return this->shoot_cost;
}
int AWeapon::getDamage() const{
    return this->damage_hit;
}

void AWeapon::setName(std::string name){
    this->name = name;
}

void AWeapon::setAPCost(int apcost){
    this->shoot_cost = apcost;
}

void AWeapon::setDamage(int dmg){
    this->damage_hit = dmg;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs){
    //std::cout << "Assignation operator called" << std::endl;
    setName(rhs.getName());
    setAPCost(rhs.getAPCost());
    setDamage(rhs.getDamage());
    return *this;
}
