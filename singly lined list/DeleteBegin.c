#include "list.h"

/**
 * supprime_debut - function that delete the first element in list
 * 
 * @liste: pointer to the first element of the list
 * Return: pointer to first element after deletoin
*/

Element *supprime_debut(Element *liste)
{
    Element *tmp = liste;
    if(liste == NULL)
    {
        return NULL;
    }
    liste = liste->suivant;
    free(tmp);
    return liste;
}
