#include "list.h"

/**
 * taille - function that calculate the size of the list
 * 
 * @liste: pointer to first element of list
 * Return: number of elements of list
*/

int taille(Element *liste)
{
    int count = 0;
    Element *tmp = liste;

    if (liste != NULL)
    {
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->suivant;
        }
    }
    return count;
}