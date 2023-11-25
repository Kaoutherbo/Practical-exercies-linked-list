#include "list.h"

/**
 * deleteBegin - function that delete 
 * node from the begining
 * 
 * @list: pointer to doubly linked list
 * Return: list after delete last node
*/

List* deleteBegin(List *list)
{
    if (list == NULL || list->head == NULL) {
        printf("Erreur : list not initialize\n");
        exit(EXIT_FAILURE);
    }

    Node *currNode = list->head;

    if (currNode->next != NULL) {
        list->head = currNode->next;    
        list->head->prev = NULL;
    } 
    else 
    {
        list->head = NULL;
        list->tail = NULL;
    }

    free(currNode);
    return list;
}               
        
