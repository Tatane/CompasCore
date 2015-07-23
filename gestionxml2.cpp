#include "gestionxml2.h"
#include "tinyxml2.h"
#include "pattern.h"
#include "temps.h"

#include <iostream>

GestionXML2::GestionXML2()
{
}

bool GestionXML2::loadFileIntoPattern(const char *file, Pattern *pattern)
{
    tinyxml2::XMLDocument doc;
    tinyxml2::XMLError err = doc.LoadFile(file);

    if (err == tinyxml2::XML_SUCCESS) {
        tinyxml2::XMLElement * rootElement = doc.FirstChildElement();

        if (rootElement) {
            tinyxml2::XMLElement * tempoElement = rootElement->FirstChildElement("tempo");
            if (tempoElement) {
                pattern->setTempo(atoi(tempoElement->GetText()));
            }

            tinyxml2::XMLElement * tempsElement = rootElement->FirstChildElement("Temps");
            while (tempsElement) {
                Temps * temps = new Temps;
                pattern->addTemps(temps);

                // Trouver les SubTemps de ce Temps :
                tinyxml2::XMLElement * subTempsElement = tempsElement->FirstChildElement("SubTemps");
                while (subTempsElement) {
                    SubTemps * subTemps = new SubTemps;
                    temps->addSubTemps(subTemps);

                    tinyxml2::XMLElement * soundElement = subTempsElement->FirstChildElement("Sound");
                    while(soundElement) {
                        // TODO il faudrait verifier lexistence de l'Attribut
                        Son * son = new Son;
                        son->setIndexSoundBuffer(soundElement->IntAttribute("index"));
                        son->setVolume(soundElement->IntAttribute("volume"));
                        subTemps->addSon(son);

                        soundElement = soundElement->NextSiblingElement();
                    }
                    subTempsElement = subTempsElement->NextSiblingElement();
                }
                tempsElement = tempsElement->NextSiblingElement();
            }
        }
    }
    else {
        return false;
    }


    return true;
}
