#include "Ttime.h"
#include <iostream>

using namespace std;
Ttime::Ttime(int godziny, int minuty)
{
    this->godziny=godziny;
    this->minuty=minuty;
}
Ttime Ttime::operator+ ( Ttime a){
    int god, minn;
    god = abs(godziny + a.godziny);
    minn = abs(minn + a.minuty);
    if (minn>=60){
        god++;
        minn--;
    }
    return Ttime (god, minn);
}

Ttime Ttime:: operator- ( Ttime a) {
    int god, minn;
    god = abs(godziny - a.godziny);
    minn = abs(minuty - a.minuty);
    return Ttime (god, minn);
}
ostream & operator<<(ostream & os, const Ttime & z)
{
    os<<z.godziny<< " godzin " << z.minuty << "minut";
    return os;
}
/*Ttime Ttime:: operator* ( Ttime a) {
    int god, minn;
    god = abs(godziny*a.godziny);
    minn = abs(minn * a.minuty);
    while(minn>=60){
        god++;
        minn--;
    }
    return Ttime (god, minn);
}
bool Ttime:: operator== ( Ttime a) {
    if ((godziny==a.godziny) && (minuty==a.minuty))
        return true;
    return false;
}*/

int Ttime::GetDod(){
    return godziny;
}
int Ttime::GetMin(){
    return minuty;
}

Ttime::~Ttime()
{
    //dtor
}
