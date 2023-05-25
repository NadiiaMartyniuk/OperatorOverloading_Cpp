#include <iostream>
#include "Tzespolona.h"
using namespace std;
#include<iomanip>

int main()
{
    Tzespolona liczba1(8,-3);
    Tzespolona liczba2(4,9);
    cout<<"Dodawanie "<<liczba1+liczba2<<endl;
    cout<<"Odejmowanie "<<liczba1-liczba2<<endl;
    cout<<"Mnozenie "<<setprecision(2)<<liczba1*liczba2<<endl;
    cout<<"Dzielenie "<<setprecision(2)<<liczba1/liczba2<<endl;

    return 0;
}

