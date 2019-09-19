#ifndef BARRECARREE_H
#define BARRECARREE_H
#include <iostream>

using namespace std;

class BarreCarree
{
public:
    BarreCarree(int _L);
    int CalculerSectionCarree();
    ~BarreCarree();

private:
int L;
int sectionCarree;
};




#endif // BARRECARREE_H
