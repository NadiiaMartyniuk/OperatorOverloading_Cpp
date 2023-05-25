#include "Tosoba.h"
#include <iostream>

using namespace std;

Tosoba::Tosoba()
{
    imie="Nadiia";
    nazwisko="Martyniuk";
}

Tosoba::Tosoba(string imie, string nazwisko)
{
    this->imie=imie;
    this->nazwisko=nazwisko;
}

ostream & operator<<(ostream & os, const Tosoba & z)
{
    os<<z.imie << " " << z.nazwisko;
    return os;
}

Tosoba::~Tosoba()
{
    //dtor
}
