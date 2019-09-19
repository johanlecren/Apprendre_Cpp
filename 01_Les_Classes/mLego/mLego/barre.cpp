#include "barre.h"




Barre::Barre(string _reference, int _longueur, float _densite, string _nomAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{
    cout << "constructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Réference : " << reference<< endl;
    cout << "Longueur : " << longueur<< endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de l'alliage : " << nomAlliage<< endl;

}

Barre::~Barre()
{
}
