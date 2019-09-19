#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <iostream>

using namespace std;

class BarreRonde
{
public:
    BarreRonde(int _d);
    float CalculerSectionRonde();
    ~BarreRonde();

private:
int d;
};


#endif // BARRERONDE_H
