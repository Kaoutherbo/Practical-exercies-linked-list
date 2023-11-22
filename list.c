#include "list.h"

/**
 * main -  Entery point
 * 
 * Return: Always 0
*/

int main()
{
    Element *head = cree_liste_vide();
    int size = getSize("How many nodes you wants in the list ? : ");
    int  option;

    head = createList(head, size);
    printf("The elements of the list are :\n");
    afficher(head);

    
    return 0;
}
