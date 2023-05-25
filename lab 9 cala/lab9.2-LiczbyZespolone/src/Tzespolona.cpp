#include "Tzespolona.h"
#include <iostream>
using namespace std;

Tzespolona::~Tzespolona()
{
    //dtor
}

Tzespolona  Tzespolona::operator+(Tzespolona b){
     Tzespolona suma(0,0);
     suma.rzeczywista=this->rzeczywista+b.rzeczywista;
     suma.urojona=this->urojona +b.urojona;
     return suma;
}

Tzespolona  Tzespolona::operator-(Tzespolona b){
     Tzespolona roznica(0,0);
     roznica.rzeczywista=this->rzeczywista-b.rzeczywista;
     roznica.urojona=this->urojona -b.urojona;
     return roznica;
}

ostream & operator<<(ostream & os, const Tzespolona & z){
    if (z.urojona<0)
        os<<z.rzeczywista << z.urojona << "i";
    else
        os<<z.rzeczywista << "+" << z.urojona << "i";
    return os;
}

Tzespolona  Tzespolona::operator*(Tzespolona b){
     Tzespolona mnozenie(0,0);
     mnozenie.rzeczywista=this->rzeczywista*b.rzeczywista;
     mnozenie.urojona=this->urojona*b.urojona;
     return mnozenie;
}

Tzespolona  Tzespolona::operator/(Tzespolona b){
     Tzespolona dzielenie(0,0);
     double mianownik = b.rzeczywista * b.rzeczywista + b.urojona * b.urojona;
     dzielenie.rzeczywista = (this->rzeczywista * b.rzeczywista + this->urojona * b.urojona) / mianownik;
     dzielenie.urojona = (this->urojona * b.rzeczywista - this->rzeczywista * b.urojona) / mianownik;
     return dzielenie;
}


