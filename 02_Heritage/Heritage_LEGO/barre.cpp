#include "barre.h"
using namespace std;

/**
 * @file barre.cpp
 * @brief Implémentation de la classe Barre
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */




/**
 * @brief   Barre::Barre
 * @details Constructeur de la classe Barre
 * @param   _nom nom de l'alliage
 * @param   _reference reference de la barre
 * @param   _taille taille de la barre
 */

Barre::Barre(const string _nom, const string _reference, const int _taille) : nom(_nom), reference(_reference), taille(_taille) {
}

Barre::Barre(const Barre& orig) {
}

/**
 * @brief   Barre::~Barre
 * @details Destructeur de la classe Barre

 */

Barre::~Barre() {
}

/**
 * @brief   Barre::AfficherCaracteristiques
 * @details Methode de la classe Barre
 * @details Afficher les caracteristiques de la barre
 */


void Barre::AfficherCaracteristiques(){
    cout << "Nom : " << nom << endl << "Reference : " << reference << endl << "Taille : " << taille << endl;
}
