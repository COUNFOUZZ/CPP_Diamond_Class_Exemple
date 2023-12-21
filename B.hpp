#ifndef B_HPP
#define B_HPP

#include "a.hpp"

class B : virtual public A {
    public:
        B(void);
        B(std::string name);
        ~B(void);

        void    WhoAmI(void) const;
};

#endif