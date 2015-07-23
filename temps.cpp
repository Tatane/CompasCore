#include "temps.h"

int Temps::getNbSubTemps() const
{
    return vecSubTemps.size();
}

Temps::Temps()
{
}

void Temps::addSubTemps(SubTemps * st)
{
    vecSubTemps.push_back(st);
}

SubTemps *Temps::getSubTempsAt(int index) const
{
    return vecSubTemps.at(index);
}
