#include "d.hpp"

D::D(void) : _name("Default_D"), B(), C() {
    std::cout << "Constructor D called" << std::endl;
}

D::D(std::string name) : _name(name), B(), C() {
    std::cout << "Constructor D called" << std::endl;
}

D::~D(void) {
    std::cout << "Destructor D called" << std::endl;
}

void    D::WhoAmI(void) const {
    std::cout << "D class" << std::endl;
    std::cout << "I'm " << this->_name << " and " << A::_name << std::endl;
}