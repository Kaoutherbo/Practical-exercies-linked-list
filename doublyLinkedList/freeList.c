#include "list.h"

/**
 * freeList - procedure that free list
 * 
 * @list: pointer to doubly linked list
 * Return: void
*/

void freeList(List *list) 
{
    if (isEmpty(list)) {
        printf("Erreur : list not initialize\n");
        exit(EXIT_FAILURE);
    }
    Node *currNode = list->head;
    while (currNode != list->tail->next) {
        Node *next = currNode->next;                  
        free(currNode);
        currNode = next;
    }
    list->head = NULL;
    list->tail = NULL;
}
