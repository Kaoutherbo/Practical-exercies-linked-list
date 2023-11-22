#include "list.h"

/**
 * ajout_position - function that add element at specific position
 * 
 * @liste: pointer to the first element of the list
 * @e: number to be added 
 * @j: position to add element in the list
*/

Element *ajout_position(Element *liste, int e, int j)
{
    if (j < 1 || j > taille(liste) || liste == NULL) {
        printf("Invalid position");
        return liste;
    }

    if (j == 1 && liste == NULL) {
        // Add at the beginning
        return ajout_debut(liste, e);
    }

    if (liste != NULL)
    {
        Element *currNode = liste, *preNode, *newNode;
        newNode = malloc(sizeof(Element));
        if(newNode == NULL)
        {
            printf("Memory can't be allocated !");
            exit(-1);
        }
        for (size_t i = 0; i < j - 1; i++)
        {
            preNode = currNode;
            currNode = currNode->suivant;
        }
        newNode->suivant = currNode;
        preNode->suivant = newNode;

        return liste;
    }
    
}
