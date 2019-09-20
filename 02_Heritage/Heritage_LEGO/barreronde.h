#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <string>
#include <iostream>
#include "barre.h"

/**
 * @file barrerond.h
 * @brief Definition de la classe BarreRond
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */



using namespace std;

class BarreRonde : public Barre {

public:
    BarreRonde(const string _nom, const string _reference, const int _diametre, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();
    double CalculerMasse(double _densite);

private:
    int diametre;
};

#endif // BARRERONDE_H
