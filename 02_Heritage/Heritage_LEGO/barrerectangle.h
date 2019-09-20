
#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

/**
 * @file barrerectangle.h
 * @brief Definition de la classe BarreRectangle
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */


class BarreRectangle : public Barre {

public:
    BarreRectangle(const string _nom, const string _reference, const int _longueur, const int _largeur, const int _taille = 250);
    void AfficherCaracteristiques();
    double CalculerSection();
    double CalculerMasse(double _densite);

private:
    int longueur;
    int largeur;

};

#endif // BARRERECTANGLE_H
