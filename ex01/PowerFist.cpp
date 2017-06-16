#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50){
    //std::cout << "Create PowerFist : " << this->name << std::endl;
    return;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src){
//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

 PowerFist::~PowerFist(){
//    std::cout << "Destroy PowerFist: " << this->name << std::endl;
    return;
}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *"<<std::endl;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs){
    //std::cout << "Assignation operator called" << std::endl;
    setName(rhs.getName());
    setAPCost(rhs.getAPCost());
    setDamage(rhs.getDamage());
    return *this;
}
