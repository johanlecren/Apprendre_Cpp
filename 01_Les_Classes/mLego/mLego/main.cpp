#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"


int main()
{
    Barre laBarre("12-01",3,40,"billon");
    laBarre.AfficherCaracteristiques();

    BarreCarree laBarreCarree(2);
    cout << "La section Carré : " << laBarreCarree.CalculerSectionCarree() << endl;

    BarreRectangle laBarreRectangle(2,3);
    cout << "La section Rectangle: " << laBarreRectangle.CalculerSectionRectangle() << endl;

    BarreRonde laBarreRonde(2);
    cout << "La section Ronde: " << laBarreRonde.CalculerSectionRonde() << endl;

return 0;

}

