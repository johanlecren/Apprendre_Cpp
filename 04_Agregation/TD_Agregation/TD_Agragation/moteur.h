#ifndef MOTEUR_H
#define MOTEUR_H

class MicroDacqLite;

class Moteur
{
private:
    int consigneVitesse;
    MicroDacqLite & laCarte;
public:
    Moteur(MicroDacqLite & _laCarte);
    void Demarrer();
    void Arreter();
    void FixerConsigne(int _laConsigne);
};

#endif // MOTEUR_H
