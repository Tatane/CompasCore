#ifndef SUBTEMPS_H
#define SUBTEMPS_H

#include <vector>
#include "SFML/Audio.hpp"
#include "son.h"

class SubTemps
{
private:
    //std::vector<int> vecIndexSoundBuffer;
    //std::vector<sf::Sound*> vecSound;
    std::vector<Son*> vecSon;

public:
    //SubTemps(int index);
    SubTemps();
    //void addIndexSoundBuffer(int);
    //int getIndexSoundBufferAt(int index) const;
    //sf::Sound* getSoundAt(int index);

    void addSon(Son * son);
    int getNbSons() const;
    Son * getSonAt(int indexVec);

};

#endif // SUBTEMPS_H
