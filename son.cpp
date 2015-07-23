#include "son.h"


int Son::getVolume() const
{
    return volume;
}

void Son::setVolume(int value)
{
    volume = value;
}

sf::Sound *Son::getSound() const
{
    return sound;
}

void Son::setSound(sf::Sound *value)
{
    sound = value;
}

int Son::getIndexSoundBuffer() const
{
    return indexSoundBuffer;
}

void Son::setIndexSoundBuffer(int value)
{
    indexSoundBuffer = value;
}
Son::Son()
    : volume(100) // 0 to 100. 100 is maximum.
    , indexSoundBuffer(-1)
    , sound(0)
{
}
