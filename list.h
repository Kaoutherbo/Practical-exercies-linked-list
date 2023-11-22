#ifndef LIST_H
#define LIST_H

// Header files
#include <stdio.h>
#include <stdlib.h>

/**
 * Element - struct that contains the data and pointer 
 * to next node of list
 * @donnee: a number 
 * @suivant: pointer to the next element of list
 * 
*/
typedef struct Element
{
    int donnee;
    struct Element *suivant;
}Element;

// prototypes of functions
Element *cree_liste_vide();
Element *ajout_debut(Element *liste, int e);
Element *supprime_debut(Element *liste);
void afficher(Element *liste);
int taille(Element *liste);
int jieme(Element *liste, int j);
Element *ajout_position(Element *liste, int e, int j);

#endif