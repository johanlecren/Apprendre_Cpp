#include "barrerectangle.h"

    BarreRectangle::BarreRectangle( int _Lr, int _lr):
    Lr(_Lr),
    lr(_lr)

{
    cout << "constructeur de la classe BarreRectangle" << endl;
}



    int BarreRectangle::CalculerSectionRectangle()
    {
    return Lr*lr;
    }





    BarreRectangle::~BarreRectangle()
    {

    }
