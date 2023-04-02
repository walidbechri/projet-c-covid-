#ifndef LSTPRIM_H_INCLUDED
#define LSTPRIM_H_INCLUDED

#include "LSTSDD.h"
LISTE listeCreer(void) ;
void listeDetruire(LISTE L);
NOEUD noeudCreer(ELEMENT e) ;
void noeudDetruire(NOEUD n);
int inserer (LISTE L, ELEMENT e, int pos);
int supprimer (LISTE L, int pos );
int estVide(LISTE);
int estSaturee(LISTE);
int listeTaille(LISTE);
void listeAfficher(LISTE);
int listeComparer(LISTE, LISTE);
LISTE listeCopier(LISTE);
ELEMENT recuperer(LISTE, int);

#endif // LSTPRIM_H_INCLUDED
