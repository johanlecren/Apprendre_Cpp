#include "barreronde.h"


BarreRonde::BarreRonde( int _d):
    d(_d)

{
  cout << "constructeur de la classe BarreRonde" << endl;
}

float BarreRonde::CalculerSectionRonde()
{

return (3.1415*(d*d))/4;
}





BarreRonde::~BarreRonde()
{

}
