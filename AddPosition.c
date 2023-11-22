#include "list.h"

/**
 * ajout_position - function that add element at spesific position
 * 
 * @liste: pointer to first element of list
 * @e: number to be added 
 * @j: position to add element in list
*/

Element *ajout_position(Element *liste, int e, int j)
{
    if(liste == NULL || j == 1)
        return ajout_debut(liste,e);
    
    Element *currNode = liste, *preNode, *newNode;
    newNode->donnee = e;
   
    for (size_t i = 0; i < j - 1; i++)
    {
        preNode =currNode;
        currNode = currNode->suivant;
    }

    newNode->suivant = currNode;
    preNode->suivant = newNode;

    return liste;
}