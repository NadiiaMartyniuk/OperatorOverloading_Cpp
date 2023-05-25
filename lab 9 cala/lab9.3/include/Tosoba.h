#ifndef TOSOBA_H
#define TOSOBA_H
#include <iostream>
#include <string>
using namespace std;

class Tosoba
{
    public:
        Tosoba();
        Tosoba(string imie, string nazwisko);
        virtual ~Tosoba();
        friend ostream & operator<<(ostream & os, const Tosoba & z);

    protected:
        string imie;
        string nazwisko;


    private:
};

#endif // TOSOBA_H
