#include "list.h"

/**
 * jieme - function that return the data of nth node
 * 
 * @liste: pointer to liste
 * @j: the index of node 
 * Return: data of nth node
*/
int jieme(Element *liste, int j)
{
    if (liste != NULL && j <= taille(liste))
    {
        Element *tmp = liste;
        int count = 1;
        while (tmp != NULL)
        {
           if (count == j)
                return (tmp->donnee);
            count++;
            tmp = tmp->suivant;
        }
    }
    else
        printf("EInvalid position ");
        exit(-1);
}