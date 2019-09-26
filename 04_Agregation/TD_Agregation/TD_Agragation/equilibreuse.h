#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H


#include "moteur.h"
#include "microdacqlite.h"

class Equilibreuse
{
private:
    MicroDacqLite laCarte;
    Moteur *leMoteur;
public:
    Equilibreuse();
    ~Equilibreuse();
};

#endif // EQUILIBREUSE_H
