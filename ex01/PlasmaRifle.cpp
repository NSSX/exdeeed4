#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21){
//    std::cout << "Create PlasmaRifle : " << this->name << std::endl;
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src){
//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

 PlasmaRifle::~PlasmaRifle(){
//    std::cout << "Destroy PlasmaRifle: " << this->name << std::endl;
    return;
}

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *"<<std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs){
//    std::cout << "Assignation operator called" << std::endl;
    setName(rhs.getName());
    setAPCost(rhs.getAPCost());
    setDamage(rhs.getDamage());
    return *this;
}
