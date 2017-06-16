#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {

public:

    std::string name;

    virtual void getPolymorphed() const;
    std::string getName() const;
    Victim(std::string mName);
    Victim( Victim const & src);
    virtual ~Victim(void);
    Victim & operator=(Victim const & rhs);

private:
    Victim(void);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);
#endif
