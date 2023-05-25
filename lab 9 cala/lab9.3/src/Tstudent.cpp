#include "Tstudent.h"
#include <iostream>
#include "Tosoba.h"
#include<string>
using namespace std;
Tstudent::Tstudent(string uczelnia)
{
    this->uczelnia=uczelnia;
}

ostream & operator<<(ostream & os2, const Tstudent & z)
{
    os2<<z.imie << " " << z.nazwisko<< " Uczelnia: "<<z.uczelnia;
    return os2;
}

Tstudent::~Tstudent()
{
    //dtor
}
