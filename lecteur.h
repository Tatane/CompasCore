#ifndef LECTEUR_H
#define LECTEUR_H

#include "SFML/Audio.hpp"

#include <vector>

class Pattern;

class Lecteur
{
private:
    Pattern * pattern;
    std::vector<sf::SoundBuffer*> vecSoundBuffers;

public:
    Lecteur();
    virtual ~Lecteur();
    void lire();
    void arreter();
    void setPattern(Pattern *);
};

#endif // LECTEUR_H
