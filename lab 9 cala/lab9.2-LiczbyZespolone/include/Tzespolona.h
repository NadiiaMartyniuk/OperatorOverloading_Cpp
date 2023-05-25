#ifndef TZESPOLONA_H
#define TZESPOLONA_H
#include <iostream>

using namespace std;

class Tzespolona
{
    public:
        Tzespolona(double rz, double ur): rzeczywista(rz), urojona(ur) {};
        virtual ~Tzespolona();
        Tzespolona  operator+(Tzespolona b);
        Tzespolona  operator-(Tzespolona b);
        friend ostream & operator<<(ostream & os, const Tzespolona & z);
        Tzespolona  operator*(Tzespolona b);
        Tzespolona  operator/(Tzespolona b);

    protected:
        double rzeczywista;
        double urojona;

    private:
};

#endif // TZESPOLONA_H
