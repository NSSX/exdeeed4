#include "Victim.hpp"

Victim::Victim( Victim const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}


Victim::Victim(std::string mName) : name(mName)
 {
    std::cout <<"Some random victim called " <<this->name << " just popped !"<< std::endl;
    return;
}

Victim::~Victim(void){
    std::cout << "Victim " << this->name << " just died for no apparent reason !" <<std::endl;
    return;
}

Victim & Victim::operator=(Victim const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}

std::string Victim::getName() const{
    return this->name;
}

void Victim::getPolymorphed() const{
    std::cout << this->name << " has been turned into a cute little sheep !"<<std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs){
    o << "I'm " << rhs.getName()<< " and I like otters !"<<std::endl;
    return o;
}
