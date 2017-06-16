#include "Peon.hpp"

Peon::Peon( Peon const & src) : Victim(src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Peon::Peon(std::string mName) : Victim(mName)
 {
    std::cout << "Zog zog."<< std::endl;
    return;
}

Peon::~Peon(void){
    std::cout << "Bleuark..." <<std::endl;
    return;
}

void Peon::getPolymorphed() const{
    std::cout << this->name << " has been turned into a pink pony !"<<std::endl;
}

Peon & Peon::operator=(Peon const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}
