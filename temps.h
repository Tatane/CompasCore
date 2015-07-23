#ifndef TEMPS_H
#define TEMPS_H

#include <vector>
#include "subtemps.h"

class Temps
{
private:
    std::vector<SubTemps*> vecSubTemps;


public:
    Temps();
    void addSubTemps(SubTemps*);
    SubTemps* getSubTempsAt(int index) const;
    int getNbSubTemps() const;
};

#endif // TEMPS_H
