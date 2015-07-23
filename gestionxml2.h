#ifndef GESTIONXML2_H
#define GESTIONXML2_H

class Pattern;

class GestionXML2
{
public:
    GestionXML2();
    bool loadFileIntoPattern(const char * file, Pattern * pattern);
};

#endif // GESTIONXML2_H
