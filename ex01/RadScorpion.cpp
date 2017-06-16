#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *"<< std::endl;
    return;
}
RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *"<< std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src){
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs){
    //std::cout << "Assignation operator called" << std::endl;
    setType(rhs.getType());
    setHitPoints(rhs.getHP());
    return *this;
}
