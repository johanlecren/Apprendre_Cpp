#ifndef BARRE_H
#define BARRE_H
#include <iostream>


using namespace std;

class Barre
{
public:
    Barre(string _reference, int _longueur, float _densite, string _nomAlliage);
    void AfficherCaracteristiques();
    ~Barre();

private:

string reference;
int longueur;
float densite;
string nomAlliage;

};




#endif // BARRE_H
