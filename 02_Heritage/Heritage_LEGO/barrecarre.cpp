#include "barrecarre.h"

/**
 * @file barrecaree.cpp
 * @brief Implémentation de la classe BarreCarre
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */




/**
 * @brief   BarreCarre::BarreCarre
 * @details Constructeur de la classe BarreCarre
 * @param   _nom nom de l'alliage
 * @param   _reference reference de la barre carré
 * @param   _cote longueur des cotés de la barre carré
 * @param   _taille taille de la barre carré
 */


BarreCarre::BarreCarre(const string _nom, const string _reference, const int _cote, const int _taille):
Barre(_nom,_reference,_taille), cote(_cote){
}


/**
 * @brief   BarreCarre::AfficherCaracteristiques
 * @details Methode de la classe BarreCarre
 * @details Affiche la longueur des cotés de la barre carré
 */


void BarreCarre::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Côté : " << cote << endl;
}

/**
 * @brief   BarreCarre::CalculerSection
 * @details Methode de la classe BarreCarre
 * @details Calcule la section de la barre carré
 */


double BarreCarre::CalculerSection(){
    double retour;
    retour = cote * cote;
    return retour;
}

/**
 * @brief   BarreCarre::CalculerMasse
 * @details Methode de la classe BarreCarre
 * @details Calcule la masse de la barre carré
 */

double BarreCarre::CalculerMasse(double _densite){
    double retour;
    retour = 8.9 * taille / 100 * CalculerSection() / 1000;
    return retour;
}
