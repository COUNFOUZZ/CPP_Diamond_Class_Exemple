#ifndef C_HPP
#define C_HPP

#include "a.hpp"

class C : virtual public A {
    public:
        C(void);
        C(std::string name);
        ~C(void);

        void    WhoAmI(void) const;
};

#endif