#include "b.hpp"

B::B(void) : A() {
    std::cout << "Constructor B called" << std::endl;
}

B::B(std::string name) : A(name) {
    std::cout << "Constructor name B called" << std::endl;
}

B::~B(void){
    std::cout << "Destructor B called" << std::endl;
}

void    B::WhoAmI(void) const {
    std::cout << "B class" << std::endl;
}