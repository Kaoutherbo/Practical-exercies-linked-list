#include "list.h"

/**
 * ajout_debut - function that add elemet 
 * in the begininng of list
 * 
 * @liste: pointer to the first element of list
 * @e: number to be added
 * Return: pointer to the first element of list
*/

Element *ajout_debut(Element *liste, int e)
{
    Element *newNode = malloc(sizeof(Element));
    newNode->donnee = e;

    if(liste != NULL)
        newNode->suivant = liste;
    else
        newNode->suivant = NULL;
    
     liste = newNode;
     return liste;
}