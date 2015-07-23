#include "subtemps.h"
/*
SubTemps::SubTemps(int index)
{
    addIndexSoundBuffer(index);
}
*/
SubTemps::SubTemps()
{

}

void SubTemps::addSon(Son *son)
{
    vecSon.push_back(son);
}

int SubTemps::getNbSons() const
{
    return vecSon.size();
}

Son * SubTemps::getSonAt(int indexVec)
{
    if (indexVec > vecSon.size()-1) {
        return 0;
    }
    else {
        return vecSon.at(indexVec);
    }

}
/*
void SubTemps::addIndexSoundBuffer(int index)
{
    vecIndexSoundBuffer.push_back(index);

    vecSound.push_back(0); // on ajoute un Sound null, qui devra être initiqlisé par un Sound* valide.
}

int SubTemps::getIndexSoundBufferAt(int index) const
{
    return vecIndexSoundBuffer.at(index);
}

sf::Sound* SubTemps::getSoundAt(int index)
{
    return vecSound.at(index);
}


*/
