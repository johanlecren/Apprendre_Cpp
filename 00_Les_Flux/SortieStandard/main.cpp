#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string  nomDuFichier;
    cout<<"Entrer le nom du fichier à lire:";
    cin>>nomDuFichier;

    ifstream leFichier(nomDuFichier.c_str());
    if(!leFichier .is_open())cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        cout << "+" << setfill('-') << setw(48) << "+" << setfill(' ') << endl;
        do
        {
            leFichier >> pays >>nbOr >> nbArgent >> nbBronze;
            if(leFichier.good())
            {
                cout << "|" << setw(20) << left << pays << "|" << setw(8) << right << nbOr << "|" << setw(8) << right << nbArgent << "|"  << setw(8) << right << nbBronze << "|" << endl ;

            }
        }while(!leFichier.eof());
        cout << "+" << setfill('-') << setw(48) << "+" << setfill(' ') << endl;
    }
    return 0;
}

