#ifndef SON_H
#define SON_H

#include <SFML/Audio.hpp>

class Son
{
    int volume;
    int indexSoundBuffer;
    sf::Sound *sound;

public:
    Son();

    int getVolume() const;
    void setVolume(int value);
    sf::Sound *getSound() const;
    void setSound(sf::Sound *value);
    int getIndexSoundBuffer() const;
    void setIndexSoundBuffer(int value);
};

#endif // SON_H
