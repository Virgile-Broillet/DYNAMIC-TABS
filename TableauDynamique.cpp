#include <iostream>
#include "TableauDynamique.h"
#include "ElementTD.h"

TableauDynamique::TableauDynamique() {
    adresse1 = new ElementTD [1];
    capacite = 1;
    taille_utilisee = 0;
};

TableauDynamique::~TableauDynamique() {
    delete [] adresse1;
    capacite = 0;
    taille_utilisee = 0;
};