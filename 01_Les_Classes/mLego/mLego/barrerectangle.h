#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include <iostream>
using namespace std;

class BarreRectangle
{
public:
    BarreRectangle(int _Lr, int _lr);
    int CalculerSectionRectangle();
    ~BarreRectangle();

private:
int sectionRectangle;
int Lr;
int lr;
};


#endif // BARRERECTANGLE_H
