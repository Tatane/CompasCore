#include "pattern.h"
#include <vector>

int Pattern::getNbTemps() const
{
    return vecTemps.size();
}


int Pattern::getTempo() const
{
    return tempo;
}

void Pattern::setTempo(int value)
{
    tempo = value;
}

Temps *Pattern::getTemps(int index)
{
    return vecTemps.at(index);
}

void Pattern::addTemps(Temps * t)
{
    vecTemps.push_back(t);
}

Pattern::Pattern()
    : tempo(60)
{
}
