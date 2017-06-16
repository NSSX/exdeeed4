#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads !"<< std::endl;
    return;
}
SuperMutant::~SuperMutant(){
    std::cout << "Aaargh ..."<< std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src){
//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

void SuperMutant::takeDamage(int dmg){
    dmg -= 3;
    if(dmg > 0){
        setHitPoints(getHP() - dmg);
        if(getHP() < 0){
            setHitPoints(0);
        }
    }
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs){
//    std::cout << "Assignation operator called" << std::endl;
    setType(rhs.getType());
    setHitPoints(rhs.getHP());
    return *this;
}
