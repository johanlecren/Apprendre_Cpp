#include <csetjmp>

/**
 * @file barrerectangle.cpp
 * @brief Implémentation de la classe BarreRectangle
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */


#include "barrerectangle.h"


/**
 * @brief   BarreRectangle::BarreRectangle
 * @details Constructeur de la classe BarreRectangle
 * @param   _nom nom de l'alliage
 * @param   _reference reference de la barre rectangle
 * @param   _longueur longueur de la barre rectangle
 * @param   _largeur largeur de la barre rectangle
 * @param   _taille taille de la barre retangle
 */


BarreRectangle::BarreRectangle(const string _nom, const string _reference, const int _longueur, const int _largeur, const int _taille):
Barre(_nom,_reference,_taille), longueur(_longueur), largeur(_largeur){
}


/**
 * @brief   BarreRectangle::CalculerSection
 * @details Methode de la classe BarreRectangle
 * @details Calcule de la section de la barre rectangle
 */

double BarreRectangle::CalculerSection(){
    double retour;
    retour = longueur * largeur;
    return retour;
}

/**
 * @brief   BarreRectangle::AfficherCaracteristiques
 * @details Methode de la classe BarreRectangle
 * @details Affiche les caracteristiques de la barre rectangle
 */

void BarreRectangle::AfficherCaracteristiques(){
    Barre::AfficherCaracteristiques();
    cout << "Longueur : " << longueur << endl << "Largeur : " << largeur << endl;
}

/**
 * @brief   BarreRectangle::CalculerMasse
 * @details Methode de la classe BarreRectangle
 * @details Calcule de la masse de la barre rectangle
 */


double BarreRectangle::CalculerMasse(double _densite){
    double retour;
    retour = 8.9 * taille / 100 * CalculerSection() / 1000;
    return retour;
}

