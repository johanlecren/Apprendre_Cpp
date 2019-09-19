#include "barrecarree.h"
//int _sectionCarree,sectionCarree(_sectionCarree),

BarreCarree::BarreCarree(int _L):

    L(_L)

{


    cout << "constructeur de la classe BarreCarre" << endl;
}


int BarreCarree::CalculerSectionCarree()
{

return L*L;
}





BarreCarree::~BarreCarree()
{

}
