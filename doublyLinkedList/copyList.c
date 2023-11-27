#include "list.h"
/**
 * copyList - function that copies elements from list2 to list1
 * 
 * @list1: pointer to doubly linked list 1
 * @list2: pointer to doubly linked list 2
 * Return: list1 after copying elements of list2 into it
*/
List* copyList(List *sourceList, List **destList)
{
    if (isEmpty(sourceList)) {
        printf("Erreur: Source list is not initialized.\n");
        return NULL;
    }

    // Initialize the destination list
    initList(destList);

    Node *temp = sourceList->head;

    while (temp != NULL) {
        *destList = addEnd(*destList, temp->data);
        temp = temp->next;
    }

    return *destList;
}
