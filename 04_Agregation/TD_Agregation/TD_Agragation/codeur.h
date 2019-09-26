#ifndef CODEUR_H
#define CODEUR_H

#include "moteur.h"
#include "microdacqlite.h"


class Codeur
{
public:
    Codeur(const MicroDacqLite & _laCarte);
    int ObtenirVitesse();
private:
    const MicroDacqLite & laCarte;
};

#endif // CODEUR_H
