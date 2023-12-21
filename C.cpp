#include "c.hpp"

C::C(void) : A() {
    std::cout << "Constructor C called" << std::endl;
}

C::C(std::string name) : A(name) {
    std::cout << "Constructor C called" << std::endl;
}

C::~C(void) {
    std::cout << "Destructor C called" << std::endl;
}

void    C::WhoAmI(void) const {
    std::cout << "C class" << std::endl;
}