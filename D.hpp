#ifndef D_HPP
#define D_HPP

#include  "B.hpp"
#include  "C.hpp"

class D : public B, public C {
    private:
        std::string _name;

    public:
        D(void);
        D(std::string name);
        ~D(void);

        void    WhoAmI(void) const;
};

#endif