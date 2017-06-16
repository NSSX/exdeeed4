#include "Sorcerer.hpp"

Sorcerer::Sorcerer( Sorcerer const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Sorcerer::Sorcerer(void){
    return;
}

Sorcerer::Sorcerer(std::string mName, std::string mTitle) : name(mName), title(mTitle)
 {
    std::cout << this->name << ", "<< this->title << ", is born!" << std::endl;
    return;
}

Sorcerer::~Sorcerer(void){
    std::cout << this->name << ", "<< this->title << ", is dead. Consequences will never be the same !" << std::endl;
    return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs){
    std::cout << "Assignation operator called" << std::endl;

    this->name = rhs.name;
    this->title = rhs.title;
    //All assignation

    return *this;
}

std::string Sorcerer::getName() const{
    return this->name;
}
std::string Sorcerer::getTitle() const{
    return this->title;
}


void Sorcerer::polymorph(Victim const & vic){
    vic.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs){
    o << "I am " << rhs.getName()<< ", "<<rhs.getTitle()<<", and I like ponies !"<<std::endl;
    return o;
}
