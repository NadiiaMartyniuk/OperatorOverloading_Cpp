#ifndef TTIME_H
#define TTIME_H
#include <iostream>

using namespace std;

class Ttime
{
    public:
        Ttime(int godziny, int minuty);
        virtual ~Ttime();
        Ttime operator+ (Ttime a);
        Ttime operator- ( Ttime a) ;
        friend ostream & operator<<(ostream & os, const Ttime & z);
        //Ttime operator* ( Ttime a) ;
        //bool operator== ( Ttime a) ;
        int GetDod();
        int GetMin();

    protected:
        int godziny, minuty;

    private:
};

#endif // TTIME_H
