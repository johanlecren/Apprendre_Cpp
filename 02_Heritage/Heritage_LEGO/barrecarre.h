#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"
/**
 * @file barrecarre.h
 * @brief Definition de la classe BarreCarre
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */

class BarreCarre : public Barre {

public:
    BarreCarre(const string _nom, const string _reference, const int _cote, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();
    double CalculerMasse(double _densite);
private:
    int cote;

};

#endif // BARRECARRE_H
