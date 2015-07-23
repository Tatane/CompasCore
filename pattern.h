#ifndef PATTERN_H
#define PATTERN_H

#include <vector>

class Temps;

class Pattern
{
private:
    //int nbTemps;
    int tempo;
    std::vector<Temps*> vecTemps;

public:
    Pattern();

    int getNbTemps() const;
    int getTempo() const;
    void setTempo(int value);
    Temps* getTemps(int index);
    void addTemps(Temps*);
};

#endif // PATTERN_H
