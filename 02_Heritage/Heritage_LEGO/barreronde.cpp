#include "barreronde.h"

/**
 * @file barreronde.cpp
 * @brief Implémentation de la classe BarreRonde
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */


/**
 * @brief   BarreRonde::BarreRonde
 * @details Constructeur de la classe BarreRonde
 * @param   _nom nom de l'alliage
 * @param   _reference reference de la barre ronde
 * @param   _diametre diametre de la barre ronde
 * @param   _taille taille de la barre ronde
 */



BarreRonde::BarreRonde(const string _nom, const string _reference, const int _diametre, const int _taille) :
Barre(_nom, _reference,_taille), diametre(_diametre) {
}


/**
 * @brief   BarreRonde::AfficherCaracteristiques
 * @details Methode de la classe BarreRonde
 * @details Afficher les caracteristiques de la barre ronde
 */

void BarreRonde::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Diametre : " << diametre << endl;
}

/**
 * @brief   BarreRonde::CalculerSection
 * @details Methode de la classe BarreRonde
 * @details Calcule la section de la barre ronde
 */

double BarreRonde::CalculerSection(){
    double retour;
    retour = M_PI * diametre * diametre / 4 ;
    return retour;
}


/**
 * @brief   BarreRonde::CalculerMasse
 * @details Methode de la classe BarreRonde
 * @details Calcule la masse de la barre ronde
 */


double BarreRonde::CalculerMasse(double _densite){
    double retour;
    retour = 8.9 * taille / 100 * CalculerSection() / 1000;
    return retour;
}
