#include "list.h"

/**
 * deleteEnd - function that delete node from the end
 * 
 * @list: pointer to doubly linked list
 * Return: list after delete last node
*/

List* deleteEnd(List *list)
{
    if (list == NULL || list->tail == NULL) {
        printf("Erreur : list not initialize\n");
        exit(EXIT_FAILURE);
    }

    Node *currNode = list->tail;

    if (currNode->prev != NULL) {
        list->tail = currNode->prev;    
        list->tail->next = NULL;
    } 
    else 
    {
        list->head = NULL;
        list->tail = NULL;
    }
    free(currNode);
    return list;
}               
        
