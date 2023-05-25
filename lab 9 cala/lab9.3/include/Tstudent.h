#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <iostream>
#include "Tosoba.h"

using namespace std;

class Tstudent : Tosoba
{
    public:
        Tstudent(string uczelnia);
        virtual ~Tstudent();
        friend ostream & operator<<(ostream & os2, const Tstudent & z);

    protected:
        string uczelnia;

    private:
};

#endif // TSTUDENT_H
