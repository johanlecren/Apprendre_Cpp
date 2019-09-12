#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>

using namespace std;


class Menu
{
private:

unsigned int nbOptions;
std::string nom;
std::string *options;
size_t longueurMax;


public:

Menu(const std::string &_nom);
int Afficher();
static void AttendreAppuiTouche();
~Menu();
};

#endif // MENU_H


