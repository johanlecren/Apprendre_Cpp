#include "equilibreuse.h"
//#include "microdacqlite.h"
#include <iostream>


using namespace std;

Equilibreuse::Equilibreuse()
{

    leMoteur = new Moteur(laCarte);
}

Equilibreuse::~Equilibreuse()
{

}
