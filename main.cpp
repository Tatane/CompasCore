#include <iostream>
#include "lecteur.h"
#include "pattern.h"
#include "temps.h"
#include "gestionxml2.h"

using namespace std;

int main()
{
    cout << "Running." << endl;

    GestionXML2 gestionXml2;

    Pattern * pattern = new Pattern();

    gestionXml2.loadFileIntoPattern("pattern3.xml", pattern);

    Lecteur * lect = new Lecteur();
    lect->setPattern(pattern);

    cout << "Pressez ENTREE pour commencer la lecture." << endl;
    getchar();

    lect->lire();

    cout << endl;

    return 0;
}

