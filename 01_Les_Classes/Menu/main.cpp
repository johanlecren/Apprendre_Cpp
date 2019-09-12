#include "menu.h"
#include <iostream>


using namespace std;

int main()
{
    int choix;
    Menu leMenu("menu.txt");

    choix = leMenu.Afficher();
    cout << "Vous avez choisi l'option :" << choix << endl;

    return 0;
}
