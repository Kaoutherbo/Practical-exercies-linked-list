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
    if (liste != NULL)
    {
        Element *tmp = liste;
        int count = 0;
        while (tmp != NULL)
        {
           if (count == j)
                return (tmp->donnee);
            
            count++;
            tmp = tmp->suivant;
        }
    }
}