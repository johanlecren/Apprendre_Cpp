#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarre.h"

/**
 * @file main.cpp
 * @brief Exemple d'utilisation de l'héritage
 * @version 1.1
 * @author Johan LE CREN
 * @date 20 septembre 2019
 *  */


using namespace std;

/*
 *
 */
int main() {


    BarreRonde maBarre("Barre ronde", "7-65", 10);
    double sectionBarreRonde, masseBarreRonde;
    maBarre.AfficherCaracteristiques();
    sectionBarreRonde = maBarre.CalculerSection();
    masseBarreRonde = maBarre.CalculerMasse(8.9);
    cout << "Section : " << sectionBarreRonde << endl << "Masse : " << masseBarreRonde << endl;

    cout << endl;


    BarreRectangle maBarre2("Barre rectangle", "7-65", 10, 5, 300);
    double sectionBarreRectangle, masseBarreRectangle;
    maBarre2.AfficherCaracteristiques();
    sectionBarreRectangle = maBarre2.CalculerSection();
    masseBarreRectangle = maBarre2.CalculerMasse(8.9);
    cout << "Section : " << sectionBarreRectangle << endl << "Masse : " << masseBarreRectangle << endl;

    cout << endl;


    BarreCarre maBarre3("Barre carree", "7-65", 10, 200);
    double sectionBarreCarre, masseBarreCarre;
    maBarre3.AfficherCaracteristiques();
    sectionBarreCarre = maBarre3.CalculerSection();
    masseBarreCarre = maBarre3.CalculerMasse(8.9);
    cout << "Section : " << sectionBarreCarre << endl << "Masse : " << masseBarreCarre << endl;


    return 0;
}
