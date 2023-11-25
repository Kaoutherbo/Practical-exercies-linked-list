#include "list.h"

/**
 * addEnd - function that add node at the end
 * 
 * @list: doubly linked list pointer
 * @val: data for the new node
 * Return: pointer to doubly linked list
*/

List* addEnd(List *list, int val) 
{
    if (list == NULL) {
        printf("Erreur : list not initialize.\n");
        exit(EXIT_FAILURE);
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erreur Memory can't be allocated.\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = val;
    newNode->next = NULL;
    
    if (isEmpty(list))
    {
        newNode->prev = NULL;
        list->head = newNode;
        list->tail = newNode;
    } 
    else
    {
        list->tail->next = newNode;
        newNode->prev = list->tail;
        list->tail = newNode;
    }
    return list;
}

