#include "list.h"

/**
 * addBegin - function that add node in begining
 * 
 * @list: doubly linked list pointer
 * @val: data for the new node
 * Return: pointer to doubly linked list
*/

List* addBegin(List *list, int val) {

    if (list == NULL) {
        printf("Erreur : list is not initialize.\n");
        return NULL;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erreur Memory can't be allocated.\n");
        return NULL;
    }
    newNode->data = val;
    newNode->next = list->head; 

    if (list->head != NULL) {
        list->head->prev = newNode; 
    } 
    else
    {
        list->tail = newNode; 
    }

    newNode->prev = NULL; 
    list->head = newNode; 

    return list;
}

