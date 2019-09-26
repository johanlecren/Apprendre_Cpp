#include "moteur.h"
#include "microdacqlite.h"



Moteur::Moteur(MicroDacqLite & _laCarte):
    laCarte(_laCarte)
{
    consigneVitesse=0;
}

void Moteur::Demarrer()
{

}

void Moteur::Arreter()
{

}

void Moteur::FixerConsigne(int _laConsigne)
{

}
