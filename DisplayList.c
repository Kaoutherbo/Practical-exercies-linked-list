#include "list.h"

/**
 * afficher - function that display element of liste
 * @liste: pointer to the first element of list
 * Return: void
*/

void afficher(Element *liste)
{
    if(liste == NULL)
        printf("The list is empty");

    Element *tmp = liste;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->donnee);
        tmp = tmp->suivant;
    }
}