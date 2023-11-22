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
    int  option, index;

    head = createList(head, size);

    // print the elements of generated list
    printf("The elements of the list are :\n");
    afficher(head);

    // deleting the first node
    head = supprime_debut(head);
    // printing the list aftre deleting first node
    printf("List after deleting first node\n");
    afficher(head);

    // print the size of generated list
    printf("The size of this list is: %d\n", taille(head));
     // print the jth element's data
    index = getSize("Enter the index of the node that you want to see its data : ");
    printf("The jth data is: %d\n", jieme(head, index));

    // insert node at a specific position
    int pos = getSize("Which position you want to add node ? : ");
    int val = getSize("Enter the data of this node: ");
    head = ajout_position(head, pos, val);

    // priting after inserting  node at specific position
    afficher(head);

    
    return 0;
}
