#include <iostream>
#include "Ttime.h"
using namespace std;

Ttime operator* ( Ttime a, int liczba);
Ttime operator* ( int liczba, Ttime a);
bool operator== ( Ttime a, Ttime b);

int main()
{
    Ttime lot1(2,30);
    Ttime lot2(1,20);
    Ttime oczekiwanie(1,5);

    cout<<"Lot1 + lot2 ="<<lot1+lot2<<endl;
    cout<<"Lot2 - oczekiwanie = "<<lot2-oczekiwanie<<endl;
    cout<<"5* lot1 = "<<lot1*5<<endl;
    cout<<"Oczekiwanie "<<oczekiwanie<<endl;
    cout<<(lot1==lot2)<<endl;
    return 0;
}

Ttime operator* ( Ttime a, int liczba) {
    int god, minn;
    god = abs(liczba*a.GetDod());
    minn = abs(liczba * a.GetMin());
    while(minn>=60){
        god++;
        minn--;
    }
    return Ttime (god, minn);
}
Ttime operator* ( int liczba, Ttime a) {
    int god, minn;
    god = abs(liczba*a.GetDod());
    minn = abs(liczba * a.GetMin());
    while(minn>=60){
        god++;
        minn--;
    }
    return Ttime (god, minn);
}
bool operator== ( Ttime a, Ttime b) {
    if ((b.GetDod()==a.GetDod()) && (b.GetDod()==a.GetDod()))
        return true;
    return false;
}
