#ifndef BARRE_H
#define BARRE_H


#include <string>
#include <iostream>
#include <cmath>

/**
 * @file barre.h
 * @brief Definition de la classe Barre
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */

using namespace std;

class Barre {

public:
    Barre(const string _nom, const string _reference, const int _taille = 250);
    Barre(const Barre& orig);
    virtual ~Barre();
    void AfficherCaracteristiques();

protected:
    string nom;
    string reference;
    int taille;

};

#endif // BARRE_H
