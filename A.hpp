#ifndef A_HPP
#define A_HPP

#include <iostream>
#include <string>

class A {
    protected:
        std::string _name;

    public:
        A(void);
        A(std::string name);
        ~A(void);

        void    WhoAmI(void) const;
};

#endif