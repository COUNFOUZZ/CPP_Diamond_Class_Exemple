#include "a.hpp"

A::A(void) : _name("Default_A") {
    std::cout << "Constructor A called" << std::endl;
}

A::A(std::string name) : _name(name) {
    std::cout << "Constructor name A called" << std::endl;
}

A::~A(void) {
    std::cout << "Destructor A called" << std::endl;
}

void    A::WhoAmI(void) const {
    std::cout << "A class" << std::endl;
}