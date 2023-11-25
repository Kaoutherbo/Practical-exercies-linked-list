#include "list.h"

/**
 * 
 * 
*/

List* copyList(List *list1, const List *list2)
{

    if (isEmpty(list1) || isEmpty(list2)) {
        printf("Erreur : listes non initialisées.\n");
        exit(EXIT_FAILURE);
    }
    if (list2->head == NULL) {
        list1->head = NULL;
        list1->tail = NULL;
        return list1;
    }
    Node *temp = list2->head;
    list1->head = (Node *)malloc(sizeof(Node));
    if (list1->head == NULL)
    {
        printf("Erreur : allocation de mémoire échouée.\n");
        exit(EXIT_FAILURE);
    }                                                                       
    l1->prem->info = temp->info;
    l1->prem->suivant = NULL;
    l1->prem->precedent = NULL;

    Cellule *courant = l1->prem;
    temp = temp->suivant;

    while (temp != NULL) {
        courant->suivant = (Cellule *)malloc(sizeof(Cellule));
        if (courant->suivant == NULL) {
            printf("Erreur : allocation de mémoire échouée.\n");
            exit(EXIT_FAILURE);
        }
        courant->suivant->info = temp->info;
        courant->suivant->suivant = NULL;
        courant->suivant->precedent = courant;

        temp = temp->suivant;
        courant = courant->suivant;
    }

    l1->last = courant; 
}

